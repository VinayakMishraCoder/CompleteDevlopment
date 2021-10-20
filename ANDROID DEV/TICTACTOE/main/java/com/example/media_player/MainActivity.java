package com.example.media_player;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.MediaController;
import android.widget.VideoView;

public class MainActivity extends AppCompatActivity
{

    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        /*grab videoView by id and set its video to nat */
        VideoView vid_view = findViewById(R.id.vid_view);
        vid_view.setVideoPath("android.resource://" + getPackageName() + "/" + R.raw.nat);

        /*Set video path*/
        MediaController mc = new MediaController(this);
        vid_view.setMediaController(mc);
        mc.setAnchorView(vid_view);
        vid_view.start();

    }
}