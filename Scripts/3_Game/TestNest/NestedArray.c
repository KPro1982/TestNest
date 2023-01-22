class NestLevel_0
{
	string basedata;
	void NestLevel_0(string value)
	{
		basedata = value;
		PrintData();
	}
	void Add(string value)
	{
		basedata = value;
		PrintData();
	}
	void PrintData()
	{
		Print("NestLevel_0");
		Print(basedata);
	}
}

class NestLevel_1
{
	ref array<ref NestLevel_0> array1;
	
	void NestLevel_1(string value)
	{
		array1 = new array<ref NestLevel_0>();
		array1.Insert(new NestLevel_0(value));
		array1.Get(0).Print("Inserting level 0");
	}
	void Add(string value)
	{
		array1.Insert(new NestLevel_0(value));
		PrintData();
	}
	void PrintData()
	{
		foreach (NestLevel_0 n0 : array1)
		{
			Print("NestLevel_1");
			n0.PrintData();
		}
	}
	
}

class NestLevel_2
{
	ref array<ref NestLevel_1> array2;
	
	void NestLevel_2(string value)
	{
		array2 = new array<ref NestLevel_1>();
		array2.Insert(new NestLevel_1(value));
		Print("Inserting level 1");
		array2.Get(0).PrintData();
	}
	void Add(string value)
	{
		array2.Get(0).Add(value);
		array2.Insert(new NestLevel_1(value));
		PrintData();
	}
	
	void PrintData()
	{
		foreach (NestLevel_1 n1 : array2)
		{
			Print("NestLevel_2");
			n1.PrintData();
		}
	}
}

class NestLevel_3
{
	ref array<ref NestLevel_2> array3;
	
	void NestLevel_3(string value)
	{
		array3 = new array<ref NestLevel_2>();
		array3.Insert(new NestLevel_2(value));
		Print("Inserting level 2");
		array3.Get(0).PrintData();
	}
	void Add(string value)
	{
		array3.Get(0).Add(value);
		array3.Insert(new NestLevel_2(value));
		PrintData();
	}
	
	void PrintData()
	{
		foreach (NestLevel_2 n2 : array3)
		{
			Print("NestLevel_3");
			n2.PrintData();
		}
	}
}

class NestLevel_4
{
	ref array<ref NestLevel_3> array4;
	
	void NestLevel_4(string value)
	{
		array4 = new array<ref NestLevel_3>();
		array4.Insert(new NestLevel_3(value));
		Print("Inserting level 3");
		array4.Get(0).PrintData();
	}
	void Add(string value)
	{
		array4.Get(0).Add(value);
		array4.Insert(new NestLevel_3(value));
		PrintData();
	}
	
	void PrintData()
	{
		foreach (NestLevel_3 n3 : array4)
		{
			Print("NestLevel_4");
			n3.PrintData();
		}
	}
}
class NestLevel_5
{
	ref array<ref NestLevel_4> array5;
	
	void NestLevel_5(string value)
	{
		array5 = new array<ref NestLevel_4>();
		array5.Insert(new NestLevel_4(value));
		Print("Inserting level 4");
		array5.Get(0).PrintData();
		
	}
	void Add(string value)
	{
		array5.Get(0).Add(value);
		array5.Insert(new NestLevel_4(value));
		PrintData();
	}
	
	void PrintData()
	{
		foreach (NestLevel_4 n4 : array5)
		{
			Print("NestLevel_5");
			n4.PrintData();
		}
	}
}
class NestLevel_6
{
	ref array<ref NestLevel_5> array6;
	
	void NestLevel_6(string value)
	{
		array6 = new array<ref NestLevel_5>();
		array6.Insert(new NestLevel_5(value));
		Print("Inserting level 5");
		array6.Get(0).PrintData();
		
	}
	void Add(string value)
	{
		array6.Get(0).Add(value);
		array6.Insert(new NestLevel_5(value));
		PrintData();
	}
	
	void PrintData()
	{
		foreach (NestLevel_5 n5 : array6)
		{
			Print("NestLevel_6");
			n5.PrintData();
		}
	}
}
class NestLevel_7
{
	ref array<ref NestLevel_6> array7;
	
	void NestLevel_7(string value)
	{
		array7 = new array<ref NestLevel_6>();
		array7.Insert(new NestLevel_6(value));
		Print("Inserting level 6");
		array7.Get(0).PrintData();
		
	}
	void Add(string value)
	{
		array7.Get(0).Add(value);
		array7.Insert(new NestLevel_6(value));
		PrintData();
	}
	
	void PrintData()
	{
		foreach (NestLevel_6 n6 : array7)
		{
			Print("NestLevel_7");
			n6.PrintData();
		}
	}
}

class NestLevel_8
{
	ref array<ref NestLevel_7> array8;
	
	void NestLevel_8(string value)
	{
		array8 = new array<ref NestLevel_7>();
		array8.Insert(new NestLevel_7(value));
		Print("Inserting level 7");
		array8.Get(0).PrintData();
		
	}
	void Add(string value)
	{
		array8.Get(0).Add(value);
		array8.Insert(new NestLevel_7(value));
		PrintData();
	}
	
	void PrintData()
	{
		foreach (NestLevel_7 n7 : array8)
		{
			Print("NestLevel_8");
			n7.PrintData();
		}
	}
}