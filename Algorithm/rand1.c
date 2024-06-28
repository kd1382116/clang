#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0));//—”‚ğ‰Šú‰»iƒVƒƒƒbƒtƒ‹j‚·‚é

	
	kazu = rand();//‚O`‚R‚Q‚V‚U‚V‚Ì”ÍˆÍ‚Å—”‚ğ‹‚ß‚é
	printf("”­¶‚µ‚½—”‚Í%d‚Å‚·\n", kazu); 
	
	kazu = rand();//‚O`‚R‚Q‚V‚U‚V‚Ì”ÍˆÍ‚Å—”‚ğ‹‚ß‚é
	printf("”­¶‚µ‚½—”‚Í%d‚Å‚·\n", kazu);
	
	kazu = rand();//‚O`‚R‚Q‚V‚U‚V‚Ì”ÍˆÍ‚Å—”‚ğ‹‚ß‚é
	printf("”­¶‚µ‚½—”‚Í%d‚Å‚·\n", kazu);
}