package com.cs.jnidemo;

public class TestJni {
    static {
        System.loadLibrary("jni");
    }
    
    public native int getadd(int add);
}