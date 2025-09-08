#pragma once

class String {
    char *data;
    int len;
    int cap;

  public:
    String();
    explicit String(char *&str);
    String(const String &other);
    String(String &&move) noexcept;
    ~String();
    String &operator=(const String &other);
    String &operator=(String &&move) noexcept;

    void input(const char *msg);
    void show(const char *msg) const;
    void concatenate(String str);
    bool isEmpty() const;
};