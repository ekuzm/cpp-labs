#pragma once

class String {
    char *data;
    int len;
    int cap;

  public:
    String();
    String(char *&str);
};