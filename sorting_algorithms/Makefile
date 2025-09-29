CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -I.
OBJ = sort.o functions/print_array.o functions/selection.o functions/bubble.o functions/insertion.o functions/merge.o functions/quick.o functions/heap.o functions/cycle.o functions/swap.o functions/find_element.o

sort: $(OBJ)
	$(CC) $(CFLAGS) -o sort $(OBJ)

sort.o: sort.c sort.h
	$(CC) $(CFLAGS) -c sort.c -o sort.o

functions/print_array.o: functions/print_array.c sort.h
	$(CC) $(CFLAGS) -c functions/print_array.c -o functions/print_array.o

functions/selection.o: functions/selection.c sort.h
	$(CC) $(CFLAGS) -c functions/selection.c -o functions/selection.o

functions/bubble.o: functions/bubble.c sort.h
	$(CC) $(CFLAGS) -c functions/bubble.c -o functions/bubble.o
	
functions/insertion.o: functions/insertion.c sort.h
	$(CC) $(CFLAGS) -c functions/insertion.c -o functions/insertion.o

functions/merge.o: functions/merge.c sort.h
	$(CC) $(CFLAGS) -c functions/merge.c -o functions/merge.o

functions/quick.o: functions/quick.c sort.h
	$(CC) $(CFLAGS) -c functions/quick.c -o functions/quick.o

functions/heap.o: functions/heap.c sort.h
	$(CC) $(CFLAGS) -c functions/heap.c -o functions/heap.o

functions/cycle.o: functions/cycle.c sort.h
	$(CC) $(CFLAGS) -c functions/cycle.c -o functions/cycle.o

functions/swap.o: functions/swap.c sort.h
	$(CC) $(CFLAGS) -c functions/swap.c -o functions/swap.o
	
functions/find_element.o: functions/find_element.c sort.h
	$(CC) $(CFLAGS) -c functions/find_element.c -o functions/find_element.o


clean:
	rm -f sort *.o functions/*.o
