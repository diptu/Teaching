#include &quot;list2.h&quot;
template&lt;class T&gt;
void UnsortedList&lt;T&gt;::insertItem(T value)//O(1)
{
this-&gt;insertAtStart(value);
}
template&lt;class T&gt;
void UnsortedList&lt;T&gt;::deleteItem(T value)//O(N)
{
if(isEmpty())throw ListEmpty();
//if head-&gt;data == value
if(this-&gt;head-&gt;data==value){
this-&gt;deleteStart();
return;
}
node&lt;T&gt; *pre=NULL, *cur=(this-&gt;head);
while(cur != NULL &amp;&amp; cur-&gt;data != value)
{
pre = cur;
cur = cur-&gt;next;
}
if(cur != NULL){ //if value is found in the list
pre-&gt;next = cur-&gt;next;
delete cur;
(this-&gt;length)--;
}
}

template&lt;class T&gt;
void SortedList&lt;T&gt;::insertItem(T value)//O(N)
{
if(this-&gt;isEmpty() || value &lt; (this-&gt;head)-&gt;data)
{
this-&gt;insertAtStart(value);
}
else
{
node&lt;T&gt; *temp=new node&lt;T&gt;;
node&lt;T&gt; *pre=NULL, *cur=(this-&gt;head);
while(cur != NULL &amp;&amp; (cur-&gt;data) &lt; value)
{
pre = cur;
cur = cur-&gt;next;
}
temp-&gt;data = value;
temp-&gt;next = cur;
pre-&gt;next = temp;
(this-&gt;length)++;
}
}
