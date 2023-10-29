# 环境配置

## 第一部分：antlr本体的安装

### 0.依赖环境准备

ANTLR 工具需要 JVM 才能执行；另一方面，为了方便使用 grun，你需要一个能够编译 java 源文件的环境。因此，你需要一个完整的 Java Development Kit。

直接使用包管理器安装

```bash
apt install openjdk-19-jdk
```

### 1.获取antlr

你需要从 [ANTLR Download](http://www.antlr.org/download/) 下载 `antlr-4.13.1-complete.jar`。我这里直接放在仓库里了

然后，你需要将该jar包的路径加入到环境变量 `CLASSPATH` 中，注意改下你的路径

```
export CLASSPATH=".:/path/to/your/antlr-4.13.1-complete.jar:$CLASSPATH"
```

最好将它加到.bashrc中（对于bash）

### 2.3. antlr4 和 grun 工具

可以定义别名 `antlr4` 表示 ANTLR 工具，即

```bash
alias antlr4='java org.antlr.v4.Tool'
```

这样，你可以直接使用 `antlr4 your.g4` 来为your.g4 生成解析器源码。

ANTLR 的运行时库中还提供了一个灵活的测试工具 `TestRig`，它可以显示解析器如何匹配输入的许多相关信息。`TestRig`使用Java的反射机制来调用编译过的解析器。为了方便用户使用，ANTLR 提供了一个 `grun` 工具来使用 `TestRig`。

`grun` 本质上是一个别名，可以定义如下：

```bash
alias grun='java org.antlr.v4.runtime.misc.TestRig'
```

或

```bash
alias grun='java org.antlr.v4.gui.TestRig'
```

同样的，你可以将这些别名命令加入到`.bashrc`，以节省你配置和使用的时间。

## 第二部分：antlr runtime的编译链接

### 0.编写C.g4

这是c语言的词法和语法的定义，我已经放入了现有的实现`C.g4`

### 1.生成parser和lexer

```
antlr4 -Dlanguage=Cpp C.g4 -visitor
```

> antlr4 默认生成listener，但我猜我们需要visitor,注意大小写敏感

### 2.编写入口main函数

这里标志着中端实际意义上的开始,尽管现在我们的中端唯一的任务是把树print出来

你可以看一下我的main.cpp代码

### 3.编译运行

但愿我已经编译好的antlr runtime (在local路径下)能在你机器上跑起来,用下面指令生成

```bash
g++ -o MyCompiler *.cpp -I ./local/include/antlr4-runtime -lantlr4-runtime
./MyCompiler <simple.c>
```

到这里就将simple.c的抽象语法树打印出来了
要有问题可能要重新编译?最后该写个cmake吧,我去吃饭了,:smile_cat:
