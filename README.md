- собираем классы
```
cd $PROJECT_ROOT
[rm ./build]
[mkdir ./build]
[mkdir ./build/classes]
javac -d ./build/classes ./src/main/java/ru/chsergeyg/jni/example/n/Calc.java \
                         ./src/main/java/ru/chsergeyg/jni/example/Main.java

```

- подготавливаем файл хедеров
```
cd $PROJECT_ROOT/build/classes
javah -d $PROJECT_ROOT/src/main/cpp ru.chsergeyg.jni.example.n.Calc
mv $PROJECT_ROOT/src/main/cpp/*.h $PROJECT_ROOT/src/main/cpp/Calc.h
```

- реализуем методы в .h
```
cp $PROJECT_ROOT/src/main/cpp/Calc.h $PROJECT_ROOT/src/main/cpp/Calc.cpp
vim $PROJECT_ROOT/src/main/cpp/Calc.cpp
```

- собираем в бинарник
```
g++ -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -fPIC Calc.cpp -shared -o $PROJECT_ROOT/jniTest/bin/calc.so
```

- не забыть линкануть calc.so в Main.<init>
```
 System.load("$PROJECT_ROOT/bin/calc.so");
```

- запуск
```
java -cp ./build/classes/ ru.chsergeyg.jni.example.Main
```
