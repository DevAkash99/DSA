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































                                                                                                                                                                                                                                                                                                                                                    