package com.example.tusharslice;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText et1;
    EditText et2;
    EditText ms;
    String a,b,mainString,d;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

         View.OnClickListener show = new View.OnClickListener() {
            public void onClick(View v) {
                Log.d("click boi", "button is clocked ");
                // do something when the button is clicked
                et1= findViewById(R.id.mainString);
                et2 = findViewById(R.id.stra);
                ms = findViewById(R.id.strb);
                a = et2.getText().toString();
                b = ms.getText().toString();
                mainString = et1.getText().toString();
                String ans = replace(mainString,a,b);
                TextView show = (TextView) findViewById(R.id.answer);
                show.setText(ans);
            }

        };
        Button btn = (Button) findViewById(R.id.button);
        btn.setOnClickListener(show);
    }

    /* LOGIC FOR FUNCTION */
    public String replace(String mainString ,String a, String b){
        return mainString.replaceAll(a,b);
    }
}