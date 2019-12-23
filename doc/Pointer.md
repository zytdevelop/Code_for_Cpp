# 指针
- 指针是一个值位内存地址的变量(或数据对象)
```c
    // 取数据的地址赋值给对应类型的指针
    int *ptr = &idataLoc;
    float *ptr = &fdataLoc;
    ...
    DATATYPE *ptr = *tdataLoc;
```

```c
    //在头文件<stdio.h>中,NULL表示常量
    //指针初始化为NULL,表示指针不指向任何地址
    int *ptr = NULL;
```


