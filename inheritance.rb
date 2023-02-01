# Is-a relationships and inheritance in typed languages

# pseudocode

class Parent {
  int compute(void) {
    return 42;
  }
}

class Child < Parent {
  int compute(void) {
  return 3490;
  }
}

Parent p = new Parent();
print(p.compute()); // 42

Child c = new Child();
print(c.compute()); // 3490

Parent x = new Child();
print(x.compute()); // 3490

Parent objs[] = {p, c, x};

Foreach p of objs {
  p.compute();
}

y is of type Parent
  Did we construct a Parent() or a Child()?
y.compute()







