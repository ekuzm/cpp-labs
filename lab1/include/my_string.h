#pragma once

class String {
    char *data;
    int len;
    int cap;

  public:
    String();
    String(char *&str);

    void input(const char *msg);
    void show(const char *msg) const;
    void concatenate(String str);
    void remove();
};