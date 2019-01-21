#ifndef TRIE_H
#define TRIE_H

/**
 * Trie. Used for prefix trees to see if a word exists.
 * Trie_node:
 *          bool: is word
 *          trie_node[26]: children of this letteer.
 *
 * Trie_node[26]: array of nodes; position in array determines the letter of the node
 *
 *
 *
 *
 *
 */
class Trie {
    public:
        Trie();
        virtual ~Trie();

    protected:

    private:
        class Trie_Node {
            Trie_Node node[26];
            public:
                Trie_Node();
                virtual ~Trie_Node();

            protected:

            private:
};
};

#endif // TRIE_H
