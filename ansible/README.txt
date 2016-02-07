# Install missing roles / plugins
 ansible-galaxy install geerlingguy.firewall 
 ansible-galaxy install rvm_io.rvm1-ruby

#for production:
ansible-playbook -i hosts_production ansible.yml -vvvvvv

#for staging:
ansible-playbook -i hosts_staging ansible.yml -vvvvvv


## Only nginx: 

 #for production:
 ansible-playbook -i hosts_production ansible.yml -vvvvvv --tags nginx

 #for staging:
 ansible-playbook -i hosts_staging ansible.yml -vvvvvv --tags nginx

