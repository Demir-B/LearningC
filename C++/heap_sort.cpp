#include <iostream>

using namespace std;

struct tree_node{
    int value;
    tree_node* left_node;
    tree_node* right_node;
};

struct binary_tree{
    tree_node* first_node;
};

tree_node* create_node(int value) {
    tree_node* node = (tree_node*) malloc(sizeof(node));
    node -> value = value;
    node -> left_node = nullptr;
    node -> right_node = nullptr;

    return node;
}

binary_tree add_node(binary_tree tree, int value) {
    if (tree.first_node == nullptr) {
        tree.first_node = create_node(value);
    }

    else if (tree.first_node != nullptr) {
        tree_node* current_node = tree.first_node;
        bool position_found = false;
        while (not position_found) {
            if (value < current_node -> value) {
                if (current_node -> left_node == nullptr) {
                    current_node -> left_node = create_node(value);
                    position_found = true;
                }
                else {
                current_node = current_node -> left_node;
                }
            }  
            else if (value > current_node -> value) {
                if (current_node -> right_node == nullptr) {
                    current_node -> right_node = create_node(value);
                    position_found = true;
                }
                else {
                current_node = current_node -> right_node;
                }
            }  
        }
    }
    return tree;
}

// Print the values in ascending order using inorder traversal
void print_tree(tree_node* node) {
    if (node == nullptr) {
        return;
    }

    print_tree(node -> left_node);
    cout << node -> value << " ";
    print_tree(node -> right_node);
}

// Frees all memory using post order traversal to get child nodes before parent
void free_all(tree_node* node) {
    if (node == nullptr) {
        return;
    }

    free_all(node -> left_node);
    free_all(node -> right_node);
    free(node);
}

int main(void) {
    binary_tree tree1 = {nullptr};

    tree1 = add_node(tree1, 1);
    tree1 = add_node(tree1, 2);
    tree1 = add_node(tree1, 5);
    tree1 = add_node(tree1, 6);
    tree1 = add_node(tree1, 8);
    tree1 = add_node(tree1, 9);
    tree1 = add_node(tree1, 3);
    tree1 = add_node(tree1, 4);
    tree1 = add_node(tree1, 7);
    tree1 = add_node(tree1, 10);

    print_tree(tree1.first_node);
    
    free_all(tree1.first_node);
    tree1.first_node = nullptr;
    return 0;
}
// list heap_sort(list L){
    // HINT: this algorithm will need recursion (two times)
    // Three things: 1. Datastructure (Binary Tree), 2. Insert algorithm, 3. Print Algorithm
    // list L2;

    // binary_tree_t heap;
    //Do something
    // We want to use a binary tree
    // heap sort:
    // first element ==> assing to root
    // current_root = root
    // next element DO==> 
        // if element > current_root => 
            // if current_right exists:
            //  current_root = current_root.right
            // else:
            // current_root.right = element
        // else 
    

    // How to read out (sorted list) from Heap?
    // HINT: given root, root.left & root.right -> in what order would you print?
    // Answer: root.left, root, root.right
    // HINT2: given grand_father, root==grand_father.left, root.left, root.right
    // Answer: root.left, root, root.right, grand_father

//     return L2;
// }




// MORE HINTS:
    // HINT3: print_tree(root){
    //  if root.left => print_tree(root.left)
    //  print(root.value)
    //  if root.right => print_tree(root.right)
    // }