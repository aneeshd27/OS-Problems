#!/bin/bash

num1=$1
operator=$2
num2=$3

case $operator in
  +)
    result=$((num1 + num2))
    ;;
  -)
    result=$((num1 - num2))
    ;;
  \*)
    result=$((num1 * num2))
    ;;
  /)
    result=$((num1 / num2))
    ;;
  *)
    echo "Invalid operator"
    exit 1
    ;;
esac

echo "$num1 $operator $num2 = $result"
