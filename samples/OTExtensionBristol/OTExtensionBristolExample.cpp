#ifndef _WIN32
#include <iostream>
#include "../../include/interactive_mid_protocols/OTExtensionBristol.hpp"
#include "../../include/interactive_mid_protocols/OTSemiHonestExtension.hpp"

using namespace std;

int mainBristol(string partyNum) {

    int my_num = stoi(partyNum);


    int nOTs = 12;

    int elementSize = 128;



/*  if (my_num == 0) {
      OTExtensionBristolSender sender(12000, true);

      OTBatchSInput *input = new OTExtensionRandomizedSInput(nOTs, elementSize);

      auto start = scapi_now();
      auto output = sender.transfer(input);
      print_elapsed_ms(start, "Transfer for random");

      vector<byte> outputbytes = ((OTExtensionRandomizedSOutput *) output.get())->getR0Arr();

      cout << "the size is :" << outputbytes.size() << " r0Arr " << endl;
      for (int i = 0; i < nOTs * elementSize / 8; i++) {

          if (i % (elementSize / 8) == 0) {
              cout << endl;
          }
          cout << (int) outputbytes[i] << "--";

      }

      outputbytes = ((OTExtensionRandomizedSOutput *) output.get())->getR1Arr();

      cout << "the size is :" << outputbytes.size() << " r1Arr " << endl;
      for (int i = 0; i < nOTs * elementSize / 8; i++) {

          if (i % (elementSize / 8) == 0) {
              cout << endl;
          }
          cout << (int) outputbytes[i] << "--";

      }


  } else {
        cout<<"nOTS: "<< nOTs<<endl;
        OTExtensionBristolReceiver receiver("localhost", 12000,true);

        vector<byte> sigma;
		sigma.resize(nOTs);
		sigma[0] = 1;
		sigma[1] = 1;


        OTBatchRInput * input = new OTExtensionRandomizedRInput(sigma, elementSize);

        auto start = scapi_now();
        auto output = receiver.transfer(input);
        print_elapsed_ms(start, "Transfer for random");

		vector<byte> outputbytes = ((OTOnByteArrayROutput *)output.get())->getXSigma();

		cout<<"the size is :" <<outputbytes.size()<<endl;
		for(int i=0; i<nOTs*(elementSize/8); i++){

			if (i%(elementSize/8)==0){
								cout<<endl;
							}
			cout<< (int)outputbytes[i]<<"--";

		}

    }


    cout<<"Done running randomized"<<endl;

*/

   /*if (my_num == 0) {
    	boost::asio::io_service io_service;
		SocketPartyData me(IpAdress::from_string("127.0.0.1"), 1212);
		SocketPartyData other(IpAdress::from_string("127.0.0.1"), 1213);
		shared_ptr<CommParty> channel = make_shared<CommPartyTCPSynced>(io_service, me, other);

		// connect to party one
		channel->join(500, 5000);


		cout<<"nOTS: "<< nOTs<<endl;
		OTExtensionBristolSender sender(12001,true,channel);

		//BitMatrix x0(nOTs);
		//BitMatrix x1(nOTs);

		//for(int i=0; i<nOTs; i++){
		//	x1.squares[i/128].rows[i % 128] = _mm_set_epi32(1,1,1,1);
		//}

		vector<byte> x0Arr;
		x0Arr.resize(nOTs * elementSize/8);

		vector<byte> x1Arr;
		x1Arr.resize(nOTs*elementSize/8);
		for(size_t i=0; i<x1Arr.size();i++)
			x1Arr[i] = 1;


		OTBatchSInput * input = new OTExtensionGeneralSInput(x0Arr, x1Arr, nOTs);
		auto start = scapi_now();
		auto output = sender.transfer(input);
		 print_elapsed_ms(start, "Transfer for general");



		cout<<"the size is :" <<x0Arr.size() <<" x0Arr " <<endl;
		for(int i=0; i<nOTs*elementSize/8; i++){

            if (i%(elementSize/8)==0){
                cout<<endl;
            }
            cout<< (int)x0Arr[i]<<"--";


		}



		cout<<"\n" <<"the size is :" <<x1Arr.size() <<" x1Arr " <<endl;
		for(int i=0; i<nOTs*elementSize/8; i++){

            if (i%(elementSize/8)==0){
                cout<<endl;
            }
            cout<< (int)x1Arr[i]<<"--";


		}


   }
	else {
		boost::asio::io_service io_service;
		SocketPartyData me(IpAdress::from_string("127.0.0.1"), 1213);
		SocketPartyData other(IpAdress::from_string("127.0.0.1"), 1212);
		//SocketPartyData receiverParty(yao_config.receiver_ip, 7766);
		//CommParty * channel = new CommPartyTCPSynced(io_service, me, other);

		shared_ptr<CommParty> channel = make_shared<CommPartyTCPSynced>(io_service, me, other);

		// connect to party one
		channel->join(500, 5000);

		OTExtensionBristolReceiver receiver("localhost", 12001,true,channel);

		vector<byte> sigma;
		sigma.resize(nOTs);
		sigma[0] = 1;
		sigma[1] = 1;

		OTBatchRInput * input = new OTExtensionGeneralRInput(sigma, elementSize);


        auto start = scapi_now();
		auto output = receiver.transfer(input);
		 print_elapsed_ms(start, "Transfer for general");


		vector<byte> outputbytes = ((OTOnByteArrayROutput *)output.get())->getXSigma();

		cout<<"the size is :" <<outputbytes.size()<<endl;
		for(int i=0; i<nOTs*elementSize/8; i++){

            if (i%(elementSize/8)==0){
                cout<<endl;
            }
            cout<< (int)outputbytes[i]<<"--";

		}


		cout<<endl;



	}*/



    if (my_num == 0) {
        	boost::asio::io_service io_service;
    		SocketPartyData me(IpAdress::from_string("127.0.0.1"), 1212);
    		SocketPartyData other(IpAdress::from_string("127.0.0.1"), 1213);
    		shared_ptr<CommParty> channel = make_shared<CommPartyTCPSynced>(io_service, me, other);

    		// connect to party one
    		channel->join(500, 5000);


    		cout<<"nOTS: "<< nOTs<<endl;
    		OTExtensionBristolSender sender(12001,true,channel);

    		//BitMatrix x0(nOTs);
    		//BitMatrix x1(nOTs);

    		//for(int i=0; i<nOTs; i++){
    		//	x1.squares[i/128].rows[i % 128] = _mm_set_epi32(1,1,1,1);
    		//}


    		vector<byte> delta;
    		delta.resize(nOTs*elementSize/8);
    		for(size_t i=0; i<delta.size();i++)
    			delta[i] = 1;



    		cout<<"before transfer"<<endl;

    		OTBatchSInput * input = new OTExtensionCorrelatedSInput(delta, nOTs);
    		auto start = scapi_now();
    		auto output = sender.transfer(input);
    		 print_elapsed_ms(start, "Transfer for correlated");



    		 vector<byte> outputbytes = ((OTExtensionCorrelatedSOutput *)output.get())->getx0Arr();

			cout<<"the size is :" <<outputbytes.size() <<" x0Arr " <<endl;
			for(int i=0; i<nOTs*elementSize/8; i++){

                if (i%(elementSize/8)==0){
                    cout<<endl;
                }
				cout<< (int)outputbytes[i]<<"--";


			}

			outputbytes = ((OTExtensionCorrelatedSOutput *)output.get())->getx1Arr();

			cout<<"\n" <<"the size is :" <<outputbytes.size() <<" x1Arr " <<endl;
			for(int i=0; i<nOTs*elementSize/8; i++){

                if (i%(elementSize/8)==0){
                    cout<<endl;
                }
				cout<< (int)outputbytes[i]<<"--";


			}



            }
    	else {
    		boost::asio::io_service io_service;
    		SocketPartyData me(IpAdress::from_string("127.0.0.1"), 1213);
    		SocketPartyData other(IpAdress::from_string("127.0.0.1"), 1212);
    		//SocketPartyData receiverParty(yao_config.receiver_ip, 7766);
    		//CommParty * channel = new CommPartyTCPSynced(io_service, me, other);

    		shared_ptr<CommParty> channel = make_shared<CommPartyTCPSynced>(io_service, me, other);

    		// connect to party one
    		channel->join(500, 5000);

    		OTExtensionBristolReceiver receiver("localhost", 12001,true,channel);

    		vector<byte> sigma;
    		sigma.resize(nOTs);
    		sigma[0] = 1;
    		sigma[1] = 1;
    		//sigma[5] = 1;

    		OTBatchRInput * input = new OTExtensionCorrelatedRInput(sigma, elementSize);

    		cout<<"before transfer"<<endl;

            auto start = scapi_now();
    		auto output = receiver.transfer(input);
    		 print_elapsed_ms(start, "Transfer for correlated");


    		vector<byte> outputbytes = ((OTOnByteArrayROutput *)output.get())->getXSigma();

    		cout<<"the size is :" <<outputbytes.size()<<endl;
    		for(int i=0; i<nOTs*elementSize/8; i++){

                if (i%(elementSize/8)==0){
                    cout<<endl;
                }
    			cout<< (int)outputbytes[i]<<"--";

    		}

    		cout<<endl;



    	}



    /*
    int size = 1280000;
    SocketPartyData senderParty(IpAdress::from_string("127.0.0.1"), 7766);
    if (my_num == 0) {


    	OTBatchReceiver * otReceiver = new OTSemiHonestExtensionReceiver(senderParty, 163, 1);

    	vector<byte> sigma;
    	sigma.resize(size);
    	sigma[0] = 1;
    	sigma[1] = 1;


		int elementSize = 128;
		OTBatchRInput * input = new OTExtensionGeneralRInput(sigma, elementSize);
		//Run the Ot protocol.
		auto start = scapi_now();
		auto output = otReceiver->transfer(input);
		print_elapsed_ms(start, "Transfer for general semi-honest");


		vector<byte> outputbytes = ((OTOnByteArrayROutput *)output.get())->getXSigma();

		cout<<"the size is :" <<outputbytes.size();
		for(int i=0; i<100; i++){

			cout<< (int)outputbytes[i];
		}

		cout<<endl;
    }
    else{

    	OTBatchSender * otSender = new OTSemiHonestExtensionSender(senderParty, 163, 1);
    	vector<byte> x0Arr;
		x0Arr.resize(size * 16);

		vector<byte> x1Arr;
		x1Arr.resize(size*16);
		for(size_t i=0; i<x1Arr.size();i++)
			x1Arr[i] = 1;
    	OTBatchSInput * input = new OTExtensionGeneralSInput(x0Arr, x1Arr, size);
    		// run the OT's transfer phase.
    	auto start = scapi_now();
    	otSender->transfer(input);
    	print_elapsed_ms(start, "Transfer for general semi-honest");
    }

*/
    return 0;
}
#endif
