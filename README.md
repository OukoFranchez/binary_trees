# 0x1D. C - Binary trees

<!-- ``` c -->
<!-- ![binary trees image](https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/07/Binary-Trees-in-C-normal-image01.jpg) -->
<!-- ``` -->
<br>

<h1 align="center"><img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/07/Binary-Trees-in-C-normal-image01.jpg" width='150'><br>Binary Trees<br>Data Structure</h1>

<p align="center"><img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black"><img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"><img src="https://img.shields.io/badge/GNU%20Bash-4EAA25?style=for-the-badge&logo=GNU%20Bash&logoColor=white"><img src="https://img.shields.io/badge/GIT-E44C30?style=for-the-badge&logo=git&logoColor=white"></p>

<br>

## Learning Objectives

### General

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Environment

<div>

<a  href="https://www.cprogramming.com/"  target="_blank"><img  height="48px"  src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/language_c-programming.svg"  alt="C programming language"  ></a>
<a  href="https://ubuntu.com/"  target="_blank"><img  height="48px"  src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/ubuntu-icon.svg"  alt="C programming language"></a>
<a  href="https://www.vim.org/"  target="_blank"><img  height="48px"  src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/Vimlogo.svg"  alt="C programming language"></a>

</div>

* Language: C
* OS: Ubuntu 20.04 LTS
* Editor: VIM 8.1.2269
* Compiler: gcc 9.3.0
  * compilation flags: ```-Wall -Werror -Wextra -pedantic -std=gnu89```
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

> Basic binary tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```


## Authors

| [<img src="https://avatars.githubusercontent.com/u/125689995?v=4" width="110" style="border-radius: 50%"><br><sub>Stosh Odhiambo<br><sup>@Stosh09](https://github.com/Stosh09) | [<img src="https://avatars.githubusercontent.com/u/96543749?v=4" width="110" style="border-radius: 50%"><br><sub>Ouko Franchez<br><sup>@OukoFranchez](https://github.com/OukoFranchez) |
|:----------------------------------------------------------------------------------------------------------------------------------------------------------------:|:--------------------------------------------------------------------------------------------------------------------------------------------------:|

## More information


[Alx Africa](https://www.alxafrica.com/)
