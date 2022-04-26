#if !defined(EXAMPLE_HPP)
#define EXAMPLE_HPP

namespace temp
{
    class Example
    {
      private:
        int _test;
      public:
        Example();
        ~Example();
        int getTestValue();
        void setTestValue(int);
    };

} // namespace temp

#endif // EXAMPLE_HPP
