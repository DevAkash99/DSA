(c)
  {
    case 1:
           cout<<"enter the element to be inserted";
             cin>>item;
             d1.add_at_beg(item);
             break;
   
    case 2:
           cout<<"enter the element to be inserted";
             cin>>item;
             d1.add_at_end(item);
             break;
    case 3:
             d1.display();
             break;
    case 4:
            d1.delete_from_front();
             break;
    case 5:
            d1.delete_from_rear();
             break;
     
    default:
            cout<<"invalid choice";
                    break;
  }
} 
while(c!=7);
}































                                                                                                                                                                                                                                                                                                                                                                                                                 else
    {
      for(int i=front;i<=rear;i++)
     {
        cout<<a[i]<<"";
      }
    }
}
void dequeue::delete_from_front()
{
   if(front==-1)
   {
       cout<<"deletion is not possible,dequeue is empty";
       return;
    }
   else
   {
     cout<<"the deleted element is"<<a[front];
     if(front=rear)
     {
        front=rear=-1;
        return;
       }
      else
        front=front+1;
      }
}
void dequeue:: delete_from_rear()
{
   if(front==-1)
   {
       cout<<"deletion is not possible,dequeue is empty";
       return;
    }
   els