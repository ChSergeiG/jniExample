package ru.chsergeyg.jni.example;

import ru.chsergeyg.jni.example.n.Calc;

public class Main {

    static {
        System.load("$PROJECT_ROOT/bin/calc.so");
    }

    public static void main(String[] args) {
        Calc calc = new Calc();
        System.out.println(calc.plus(10, 8));
        System.out.println(calc.minus(10, 8));
    }
}
