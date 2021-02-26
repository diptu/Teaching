template&lt;class T&gt; SinglyLinkedListWithTail&lt;T&gt;::SinglyLinkedListWithTail()
{
cout&lt;&lt;&quot;In SinglyLinkedListWithTail constructor&quot;&lt;&lt;endl;
tail=NULL;
}
template&lt;class T&gt; SinglyLinkedListWithTail&lt;T&gt;::~SinglyLinkedListWithTail()
{
cout&lt;&lt;&quot;In SinglyLinkedListWithTail destructor&quot;&lt;&lt;endl;
tail=NULL;
}
template&lt;class T&gt; void SinglyLinkedListWithTail&lt;T&gt;::insertAtStart(T value)
{
node&lt;T&gt; *temp=new node;
temp-&gt;data=value;
temp-&gt;next=NULL;
if(this-&gt;head==NULL) {
this-&gt;head=tail=temp;
temp=NULL;
}
else{
temp-&gt;next=this-&gt;head;
this-&gt;head=temp;
}
this-&gt;length++;
this-&gt;curptr=this-&gt;head;
}
template&lt;class T&gt;
void SinglyLinkedListWithTail&lt;T&gt;::insertAtEnd(T value)
{
node&lt;T&gt; *temp=new node;
temp-&gt;data=value;
temp-&gt;next=NULL;
if(this-&gt;head==NULL) {
this-&gt;curptr=this-&gt;head=tail=temp;
temp=NULL;
}
else {
tail-&gt;next=temp;
tail=temp;
}
(this-&gt;length)++;
}

template&lt;class T&gt;
void SinglyLinkedListWithTail&lt;T&gt;::deleteEnd()
{
if(this-&gt;isEmpty())throw ListEmpty();
if(this-&gt;length==1)
{
this-&gt;deleteStart();
return;
}
node&lt;T&gt; *pre,*cur=this-&gt;head;
while(cur-&gt;next!=NULL)
{
pre=cur;
cur=cur-&gt;next;
}
tail=pre;
pre-&gt;next=NULL;
delete cur;
(this-&gt;length)--;
