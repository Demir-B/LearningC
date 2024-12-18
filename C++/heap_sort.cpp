// struct tree_node_t{

// };

// struct binary_tree_t{

// };

list heap_sort(list L){
    // HINT: this algorithm will need recursion (two times)
    // Three things: 1. Datastructure (Binary Tree), 2. Insert algorithm, 3. Print Algorithm
    list L2;

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

    return L2;
}




// MORE HINTS:
    // HINT3: print_tree(root){
    //  if root.left => print_tree(root.left)
    //  print(root.value)
    //  if root.right => print_tree(root.right)
    // }