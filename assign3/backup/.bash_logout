# ~/.bash_logout

clear

HOST=`/bin/hostname`
if [ "$HOSTNAME" = "mercury.cs.uml.edu" ]
then
	/usr/local/bin/ipc_clear
fi

