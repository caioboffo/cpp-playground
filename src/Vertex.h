// Copyright 2015 <caioboffo@gmail.com>

#ifndef _VERTEX_H_
#define _VERTEX_H_

template <typename T>
class Vertex {
 private:
  T value_;
  int color_;
  int discovered_time_;
  int finished_time_;
  vertex* parent_;
  int key_;

 public:
  static int WHITE;
  static int BRACK;
  static int GRAY;

  Vertex();
  explicit Vertex(T value);
  T getValue();
  void setValue(T);
  int getColor();
  void setColor(int);
  int getDiscoveredTime();
  void setDiscoveredTime(int);
  vertex* getParent();
  void setParent(vertex*);
  int getKey();
  void setKey(int)
  
};

#endif  // _VERTEX_H_
