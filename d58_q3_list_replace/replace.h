void replace(const T& x, list<T>& y) {
 	 		//write your code here
  			node *p = mHeader->next;
			while (p != mHeader)
			{
				if (p->data == x) {
					iterator it(p);
					for (const auto& element : y) {
						insert(it, element);
					}
          erase(it);
				}
				p = p->next;
			}
			
		}