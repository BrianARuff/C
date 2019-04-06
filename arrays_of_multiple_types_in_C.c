enum datatype {
    INT_TYPE=0,
    FLOAT_TYPE=1,
};

struct array_entry {
    enum datatype datatype;
    int intdata;
    float floatdata;
};

struct array_entry *new_array_entry(enum datatype datatype, void *data)
{
    int *intp;
    float *floatp;

    struct array_entry *ent = malloc(sizeof(*ent));

    ent->datatype = datatype;

    switch (datatype) {
        case INT_TYPE:
            intp = data;
            ent->intdata = *intp;
            break;
        case FLOAT_TYPE:
            floatp = data;
            ent->floatdata = *floatp;
            break;
    }

    return ent;
}

int main(void)
{
    struct array_ent *array[128];
    int two = 2;
    float pi = 3.14;
    array[0] = new_array_entry(INT_TYPE, &two);
    array[1] = new_array_entry(FLOAT_TYPE, &pi);
    for(int i = 0; i < 2; i++){
        printf("%p\n", array[i]);
    }
}