package com.vaibhav.learnrecycler

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide

class newlistadapter(private val listener:newitemclicked):RecyclerView.Adapter<newsviewholder>(){
    private val items:ArrayList<Dataclass> = ArrayList()
    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): newsviewholder {
       val view = LayoutInflater.from(parent.context).inflate(R.layout.itemnews,parent,false)
        val viewhlder=newsviewholder(view)
        view.setOnClickListener {
                listener.onitemclicked(items[viewhlder.absoluteAdapterPosition])
        }
        return viewhlder
    }

    override fun getItemCount(): Int {

        return items.size
    }
    override fun onBindViewHolder(holder: newsviewholder, position: Int) {
        val curr=items[position]
        holder.til.text=curr.title
        holder.ath.text=curr.author
        Glide.with(holder.itemView.context).load(curr.imageurl).into(holder.img)
    }
    fun updatenews(updatenews: ArrayList<Dataclass>)
    {
        items.clear()
        items.addAll(updatenews)
        notifyDataSetChanged()
    }
}
class newsviewholder (itemView: View) : RecyclerView.ViewHolder(itemView){
val til :TextView = itemView.findViewById(R.id.textView2)
    val ath:TextView=itemView.findViewById(R.id.auth)
    val img:ImageView=itemView.findViewById(R.id.pic)

}
interface newitemclicked{
    fun onitemclicked(item:Dataclass)
}