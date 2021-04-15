#ifndef LIST
# define LIST

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif
