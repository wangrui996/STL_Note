# vector  





## vector添加元素  

[push_back()和emplace_back()详解](http://c.biancheng.net/view/6826.html)  

**总结：**  
* push_back()与emplace_back()都可以向容器尾部添加元素，底层实现不同  
* push_back()会先创建这个元素（调用元素的构造函数），再调用拷贝或移动构造函数将元素添加到到容器中（调用拷贝构造函数完成后会自行销毁先前创建的元素）  
* emplace_back()会直接在容器尾部创建这个元素（没有拷贝或移动元素的过程的）  





