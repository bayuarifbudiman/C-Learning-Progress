# Algorithm Via C++ STL Module Summary

<b>STL</b> is a C++ Standard Library that provide solutions to manipulating collections of data with modern efficient algorithms

<h5> STL has three components: </h5>
<ul>
<li> Containers are used to manage collections of objects of a certain kind.</li>
<li> Iterators common interface for all containers to step/traverse through the elements</li>
<li> Algorithms are used to process the elements of collections, such as search, sort, modify </li>
</ul>

<h3><u>STL Containers</u></h3>
<h5> There is four types of containers: </h5>
<ul>
<li>Sequence containers, which implement data structures that can be accessed sequentially. such as Array, Vector, Deque, Forward List, List</li>
<li>Associative containers, which implement as Binary Trees to sorted data structures that can be quickly searched such as Set, Map, Multi Set, Multi Map</li>
<li>Unordered associative containers, which implement as Hash Tables to unsorted (hashed) data structures that can be quickly searched such as Unordered Set, Unordered Map, Unordered Multi Set, and Unordered Multi Map</li>
<li>Container adaptors, which provide a different interface for sequential containers such as Stack, Queue, and Priority Queue</li>
</ul>

<h5> Example of sequence containers (Vector)</h3>
<img src="https://raw.githubusercontent.com/bayuarifbudiman/Cpp-Learning-Progress/main/Algorithms%20Via%20C%2B%2B%20STL/img/vector.png" width="600" height="500"></img>

<h3> <u>STL Iterators</u> </h3>
<b>STL Iterators</b> are used to point at the memory addresses of STL containers. They are primarily used in sequence of numbers, characters etc. They reduce the complexity and execution time of program.

<h5> There are five types of iterators in C++ STL: </h5>
<ul>
  <li>
    Input Iterators in C++, The input iterator is basicly the iterator for input operations.
  </li>
  <li>
    Output Iterators in C++, The output iterator is basicly the iterator for output operations. That it is used to assign the values, But it can not access the values.
  </li>
  <li>
    Forward Iterators, Forward Iterators is combination of Input and Output Iterators, but this iterators are one-way iterators, and the containers that used this iterators are (Forward List, Unordered Containers)
  </li>
  <li>
    Bidirectional Iterators, Bidirectional Iterators can iterate to forward and backward direction, the containers that used this iterators are (List, Set, Multiset, Map, Multimap).
  </li>
  <li>
    Random Access Iterator, Random Access iterators are considered to be the most completed iterators among all the five iterators. These iterators are also stated as bidirectional iterators with random access. the containers that used this iterators are (Array, Vector, Deque, etc).
  </li>
</ul>
<h5> Example of Implementation Map using Iterators</h3>
<img src="https://raw.githubusercontent.com/bayuarifbudiman/Cpp-Learning-Progress/main/Algorithms%20Via%20C%2B%2B%20STL/img/map.png" width="600" height="500"></img>


<h3> <u>STL Algorithms</u> </h3>
<b>STL Algorithms</b> defines a collection of functions especially designed to be used on ranges of elements.They act on containers and provide means for various operations for the contents of the containers. there are few example of algorithms such as Sort, Search, Copy, Replace, etc.
<h5> Example of Implementation Sort Algorithm (Vector)</h3>
<img src="https://raw.githubusercontent.com/bayuarifbudiman/Cpp-Learning-Progress/main/Algorithms%20Via%20C%2B%2B%20STL/img/array.png" width="600" height="500"></img>
