
// // void IntNode::remove(int index)
// // {
// //     if ( index == 0 )
// //     {
// //         pop_front();
// //     }
// //     else
// //         {
// //             Node <T> * p_previous = this->p_head;

// //             for (int i {0}; i < index - 1; i++)
// //             {
// //                 p_previous = p_previous->p_next;
// //             }

// //             Node <T> * p_to_delete = p_previous->p_next;
// //             p_previous->p_next = p_to_delete->p_next;

// //             delete p_to_delete;

// //             size--;
// //         }
// // }
// template <class T>
// void List <T>::insert( T data, int index )
// {
//     if (index == 0)
//     {
//         push_front( data );
//     }
//     else
//         {
//             Node <T> * p_previous = this->p_head;

//             for (int i {0}; i < index - 1; i++)
//             {
//                 p_previous = p_previous->p_next;
//             }
//             p_previous->p_next = new Node <T>( data, p_previous->p_next );
//         }
// }