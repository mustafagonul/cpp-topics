// This is not working
/*
template <typename Type>
class foo {
  static_assert(false, "Wrong Type");
};
*/

template <typename Type>
class foo {
  static_assert(sizeof(Type) == -1, "Wrong Type!");
};

template <>
class foo<int> {
};


int main()
{
  foo<int> fi;    // should compile
  // foo<double> fd; // should not compile

  return 0;
}