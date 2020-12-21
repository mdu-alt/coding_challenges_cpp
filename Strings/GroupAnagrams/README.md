# Group anagrams

## Context
An **anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all
the original letters exactly once.

## Goal
Write a function that, given an array of word, returns the anagrams group together, if any.
```c++
std::vector<std::set<std::string>> group_anagrams(const std::vector<std::string>& word_list);
```

## Constraints /
- `word_list` may be as big as the largest possible array
- The output array may group words in any orders

## Examples
```c++
group_anagrams({ "hello" }) == { { "hello" } };
group_anagrams({ "hello", "code", "cdeo", "ecod" }) == { { "code", "cdeo", "ecod" }, { "hello" } };
```
