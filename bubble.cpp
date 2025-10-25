int a[] = {9, 4, 8, 3, 1, 6, 5, 2, 7}; 

int n = sizeof(a) / sizeof(a[0]); 
for (int i = 0; i < n - 1; i++) {
  for (int j = 0; j < n - i - 1; j++) 
	{ 
		
		if (a[j] > a[j + 1]) 
		{ 
     int temp = a[j]; 
			a[j] = a[j + 1]; 
			a[j + 1] = temp; 
		} 
	} 
} 
