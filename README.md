// TODO
仿string view (可用于c++11 gcc4.x)，但提供了许多非0结尾的算法，以及split/join，可以作为map/unordered_map的key(只要保证字符串生命周期)。(在它基础上继承并提供析构函数和计数也是不错的，这样就可以完美地作为map的key了，字符串存储和value共用)

LocalStringA(W/U)<长度> 带实际长度信息，栈上使用，也适合传参。并且不同长度可以互相传参。【此外以下LocalString在VS的Debug编译模式下进行了特别优化(自编辑机器码把vc编译出来的多余机器码删掉)，性能快到跟Release差不离，帮助大家在Debug模式下也性能如飞。】
ConstStringA(W/U)，专用来指向字符串字面量，即那些生命周期和进程一样长的。另一个String<长度>，和std::string比较像可以指定本地数组长度，不够时变成堆内存。
CharArrayA(W/U)<长度> 不带实际长度信息，结构体/序列化时使用。
UniqueStringA(W/U) 任何构造将从进程的字符串池中申请，相同内容的字符串的地址必定相同，可以用==直接判定。不允许修改。LuaString/MySQLString，透传lua脚本/sql语言用的AutoDelPtr<删除方式mode> 用于用户传字符串进来，同时用户提供析构释放函数(可空)，适用于模块边界，上层传入字符串的同时，下层需要存储但不想花费重复的空间(比如下层是个十万元素的元素数组可能要复用一个字符串)。OffsetPtr<String> 相对偏移量的字符串，用于内存映射，或结构体复制时引用结构体内部的字符串。SharedString 差不多是 shared_ptr<string>有其他价值的但未实现和验证的:显式的COWstring字符串编辑器和巨型字符串编辑用的字符串链/树带有hash值字段的string view，用于unordered_map