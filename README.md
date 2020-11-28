# Домашнее задание

## Переписать реализованную ранее класическую структуру данных как шаблонный класс

## Переписать реализованную ранее сортировку как шаблонную функцию(используя компаратор только для одной сортировки)

## Дополнить реализованный шаблоный класс `smart_pointer`, реализовав для него частичную специализацию для динамического массива(т.е. вызывать `delete[]` вместо `delete`). **Задание опциональное**

```cpp
template <typename T>
class smart_pointer {
 public:
  smart_pointer(T* ptr) : data{ptr} { std::cout << __PRETTY_FUNCTION__ << std::endl;}
  ~smart_pointer() {delete data; std::cout << __PRETTY_FUNCTION__ << std::endl;}
  T* get() {return data;}
 private:
   T* data;
};
```
