图书管理系统（Library management system）
----

我的博客：[并非菜鸟](https://songyaxu.github.io)
=====

# 介绍

这个系统是我学习了一个学期的Visual C++（MFC）所写的。
功能什么的还是比较复杂的，在一开始接触这块的时候，都不是知道如何使用C++获取数据库中的数据。下了很大的功夫。
最后还可以读写EXCEL和Word文件、还是用了UI库，功能也算是比较完善了。

![1](img/overview.png)

# 项目配置

> 如何创建ODBC数据源：
> 1. 搜索程序输入：ODBC
> 2. ![1](img/odbc_settings.png)
> 3. ![1](img/odbc_settings_1.png)
> 4. ![1](img/odbc_settings_2.png)
> 5. ![1](img/odbc_settings_3.png)
> 6. 其中lms是我们创建的数据库名称
> 7. 图书管理系统 是数据源的名称，使我们在代码中使用的！
``` c++
CString CAdmin::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}
```
我使用IDE是Visual C++ 6.0。
使用编译器打开源码，然后看到项目的目录结构大概是这个样子的。
![](img/catalog.png)

还算是清晰吧。
我现在已经把所有的sql脚本生成了，可以直接使用。可以说我的前期工作做得还是很多的
>
+ 图书的一级分类、二级分类。
+ 大量的人员信息、大量的图书信息。
+ EXCEL、WORD的导入导出。
+ 真实的院校结构、真实的图书信息。

我的sql中只有一个管理员，和一个读者，和几本图书。大家使用时可以通过管理员账户快速的添加读者和图书。
通过导入功能可以参照模板

+ [100图书信息表.xls](templates/100图书信息表.xls)
+ [1050读者信息表.xls](templates/1050读者信息表.xls)
