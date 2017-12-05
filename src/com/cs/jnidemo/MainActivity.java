package com.cs.jnidemo;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TestJni jniMethod = new TestJni();
        Log.i("MainActivity", "====================> jni test:" + jniMethod.getadd(4));
    }
}
