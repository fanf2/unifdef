echo undef
unifdef div.c
echo one
unifdef -DDENOM div.c
echo zero
if ! unifdef -UDENOM div.c
then unifdef -d -UDENOM div.c
fi
