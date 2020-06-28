package com.smile.crystal;

import java.util.ArrayList;
import java.util.List;

public class TestStruct {

    public int a;
    public double b;
    public String c;
    public List<Integer> d;

    public TestStruct()
    {
        d = new ArrayList<>();
    }

    public TestStruct(int a, double b, String c){
        this.a = a;
        this.b = b;
        this.c = c;

        d = new ArrayList<>();
        this.d.add(a);
    }


    public int getA() {
        return a;
    }

    public void setA(int a) {
        this.a = a;
    }

    public double getB() {
        return b;
    }

    public void setB(double b) {
        this.b = b;
    }

    public String getC() {
        return c;
    }

    public void setC(String c) {
        this.c = c;
    }

    public List<Integer> getD() {
        return d;
    }

    public void setD(List<Integer> d) {
        this.d = d;
    }



}
