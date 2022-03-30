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
