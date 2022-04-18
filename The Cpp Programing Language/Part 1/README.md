<h2>A tour of C++: The Basics</h2>
The minimal C++ program function is called main. The program starts
by executing that function. The int value returned by main()
<h3>Types, Variables, and Arithmetics</h3>
Every name and every expression has a type that determines the operations that may be performed
on it. C++ offers a variety of fundamental types. For example:
<ul>
<li>bool // Boolean, possible values are true and false</li>
<li>char // character, for example, 'a', ' z', and '9'</li>
<li>int // integer, for example, 1, 42, and 1066</li>
<li>double // double-precision floating-point number, for example, 3.14 and 299793.0</li>
</ul>
When defining a variable, you don’t actually need to state its type explicitly when it can be
deduced from the initializer:
<ul>
<li>auto b = true // a bool</li>
<li>auto ch = 'x'; // a char</li>
<li>auto i = 123; // a int</li>
<li>auto d = 1.2; // a double</li>
<li>auto z = sqrt(y); // z has the type of whatever sqr t(y) returns </li>
</ul>
<h3>Constants</h3>
C++ supports two notions of immutability :
<ul>
  <li>Const is meaning roughly ‘‘I promise not to change this value’’. This is used primarily to specify interfaces, so that data can be passed to functions without fear of it being modified. The compiler enforces the promise made by const .</li>
  <li>Constexpr is meaning roughly ‘‘to be evaluated at compile time’’. This is used primarily to specify constants, to allow placement of data in memory where it is unlikely to be corrupted, and for performance.</li>
</ul>
For example:
<ul>
  <li>const int dmv = 17; // dmv is a named constant</li>
  <li>int var = 17; // var is not a constant</li>
  <li>constexpr double max1 = 1.4∗square(dmv); // OK if square(17) is a constant expression</li>
  <li>constexpr double max2 = 1.4∗square(var); // error : var is not a constant expression</li>
  <li>const double max3 = 1.4∗square(var); // OK, may be evaluated at run time</li>
</ul>
