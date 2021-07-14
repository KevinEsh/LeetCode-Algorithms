# 20. Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

Example 1:

```bash
Input: s = "()"
Output: true
```

Example 2:

```bash
Input: s = "()[]{}"
Output: true
```

Example 3:

```bash
Input: s = "(]"
Output: false
```

Example 4:

```bash
Input: s = "([)]"
Output: false
```

Example 5:

```bash
Input: s = "{[]}"
Output: true
```

Constraints:

* 1 <= s.length <= 104
* s consists of parentheses only '()[]{}'.
