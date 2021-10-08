package com.vaibhav.learnrecycler

import android.net.Uri
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.Adapter
import android.widget.Toast
import androidx.browser.customtabs.CustomTabsIntent
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.android.volley.AuthFailureError
import com.android.volley.Request
import com.android.volley.Response
import com.android.volley.toolbox.JsonObjectRequest
import org.json.JSONObject
class MainActivity : AppCompatActivity() ,newitemclicked {
    private lateinit var mAdapter: newlistadapter
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val recyc: RecyclerView = findViewById(R.id.recycler)
        recyc.layoutManager = LinearLayoutManager(this)
        fetchdata()
        mAdapter= newlistadapter(this)
        recyc.adapter = mAdapter
    }

    private fun fetchdata(){
        val url = "https://newsapi.org/v2/top-headlines?country=us&category=business&apiKey=55b1286a0be443de8a3a625a066c32fa"
        val json = object : JsonObjectRequest(
            Request.Method.GET, url, null, Response.Listener {
                val newsjsonarray = it.getJSONArray("articles")
                val newsarray = ArrayList<Dataclass>()
                for (i in 0 until newsjsonarray.length()) {
                    val newsjsonobject = newsjsonarray.getJSONObject(i)
                    val news = Dataclass(
                        newsjsonobject.getString("title"),
                        newsjsonobject.getString("author"),
                        newsjsonobject.getString("url"),
                        newsjsonobject.getString("urlToImage")

                    )
                    Log.i("n","var")
                    newsarray.add(news)
                }
                mAdapter.updatenews(newsarray)
            }, Response.ErrorListener {

            }
        ) {
            @Throws(AuthFailureError::class)
            override fun getHeaders(): Map<String, String> {
                val params: MutableMap<String, String> = HashMap()
                params["User-Agent"] = "Mozilla/5.0"
                return params
            }
        }
    singleton.getInstance(this).addToRequestQueue(json)
}
    override fun onitemclicked(item: Dataclass) {
        val builder= CustomTabsIntent.Builder();
        val customTabsIntent = builder.build();
        customTabsIntent.launchUrl(this, Uri.parse(item.url));
    }
}