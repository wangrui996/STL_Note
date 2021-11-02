# STL关联式容器——set容器 


##   

[详细介绍](http://c.biancheng.net/view/7192.html)

C++11为标准库添加了4种无序(哈希)容器  

unordered_set容器使用哈希函数组织的集合，可称为无序集合或者哈希集合，与set相似，但是set容器会对存储的数据进行自动排序  


特点：
    * 1.直接存储数据，而不是以键值对的形式  
    * 2.容器内存储的各元素互不相等，且不能被修改  
    * 3.不对所存储的数据排序(因为是用哈希表实现的)  
    对于特点1，可以理解为，其键和值相同，因此为节省存储空间只存键值对的值。  


## 创建std::unordered_set容器  


(1)unordered_set模板类的调用默认构造函数，创建一个空的unordered_set容器  
    std::unordered_set<std::string> mySet;  

(2)创建时初始化  

    std::unordered_set<std::string> mySet{"hello", "world"};  

(3)拷贝构造函数  
    std::unordered_set<std::string> mySet2(mySet);  

(4)只拷贝一部分  
    std::unordered_set<std::string> mySet3(mySet2.begin(),mySet2.begin()+2);  
只拷贝前2个元素


## unordered_set容器的成员方法  
(上表)  



