#pragma once

namespace ProjetPOOG3 {

	int b;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private: System::Windows::Forms::Button^ btn_GestionPersonnel;
	private: System::Windows::Forms::Button^ btn_GestionClient;
	private: System::Windows::Forms::Button^ btn_GestionCommande;
	private: System::Windows::Forms::Button^ btn_GestionStock;
	private: System::Windows::Forms::Button^ btn_GestionStatistique;
	private: System::Windows::Forms::TextBox^ nom;

	private: System::Windows::Forms::TextBox^ prenom;
	private: System::Windows::Forms::TextBox^ DNN;
	private: System::Windows::Forms::TextBox^ Date_Pachat_client;

	private: System::Windows::Forms::TextBox^ AP_F;
	private: System::Windows::Forms::TextBox^ CP_F;
	private: System::Windows::Forms::TextBox^ ville_F;
	private: System::Windows::Forms::TextBox^ AP_L;
	private: System::Windows::Forms::TextBox^ CP_L;
	private: System::Windows::Forms::TextBox^ ville_L;
	private: System::Windows::Forms::Label^ txt_AdresseF;
	private: System::Windows::Forms::Label^ txt_adresseL;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_supp;
	private: System::Windows::Forms::Button^ btn_upd;
	private: System::Windows::Forms::Button^ btn_afficher;
	private: System::Windows::Forms::Label^ txt_nom;





	private: System::Windows::Forms::Label^ txt_DNN;
	private: System::Windows::Forms::Label^ txt_Pachat;
	private: System::Windows::Forms::Label^ txt_prenom;
	private: System::Windows::Forms::Label^ txt_numéroclient;
	private: System::Windows::Forms::Label^ txt_AP_F;
	private: System::Windows::Forms::Label^ txt_AP_L;
	private: System::Windows::Forms::Label^ txt_CP_F;
	private: System::Windows::Forms::Label^ txt_CP_L;
	private: System::Windows::Forms::Label^ txt_ville_L;
	private: System::Windows::Forms::Label^ txt_ville_F;
	private: System::Windows::Forms::Label^ txt_ville_personnel;
	private: System::Windows::Forms::Label^ txt_CP_personnel;
	private: System::Windows::Forms::Label^ txt_AP_personnel;
	private: System::Windows::Forms::Label^ txt_nom_personnel;
	private: System::Windows::Forms::Label^ txt_prenom_personnel;

	private: System::Windows::Forms::TextBox^ numéro_client;
	private: System::Windows::Forms::TextBox^ nom_personnel;
	private: System::Windows::Forms::TextBox^ prenom_personnel;
	private: System::Windows::Forms::TextBox^ AP_personnel;
	private: System::Windows::Forms::TextBox^ CP_personnel;
	private: System::Windows::Forms::TextBox^ ville_personnel;




private: System::Windows::Forms::Label^ txt_nom_superieur;
private: System::Windows::Forms::TextBox^ id_superieur;
private: System::Windows::Forms::Label^ txt_id_superieur;
	private: System::Windows::Forms::TextBox^ ref_commande;
	private: System::Windows::Forms::Label^ txt_ref_commande;
	private: System::Windows::Forms::Label^ txt_id_client_commande;

	private: System::Windows::Forms::TextBox^ id_client_commande;



	private: System::Windows::Forms::Button^ add_commande;
	private: System::Windows::Forms::Label^ txt_date_emision_commande;

	private: System::Windows::Forms::TextBox^ Date_emision_commande;
	private: System::Windows::Forms::Label^ txt_date_livraison_commande;

	private: System::Windows::Forms::TextBox^ Date_livraison_commande;
	private: System::Windows::Forms::Label^ txt_id_article_commande;

	private: System::Windows::Forms::TextBox^ id_article_commande;
	private: System::Windows::Forms::Label^ txt_quantité_article_commande;
	private: System::Windows::Forms::TextBox^ quantite_article_commande;















	protected:





	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_GestionPersonnel = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_GestionClient = (gcnew System::Windows::Forms::Button());
			this->btn_GestionCommande = (gcnew System::Windows::Forms::Button());
			this->btn_GestionStock = (gcnew System::Windows::Forms::Button());
			this->btn_GestionStatistique = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_supp = (gcnew System::Windows::Forms::Button());
			this->btn_upd = (gcnew System::Windows::Forms::Button());
			this->btn_afficher = (gcnew System::Windows::Forms::Button());
			this->numéro_client = (gcnew System::Windows::Forms::TextBox());
			this->nom = (gcnew System::Windows::Forms::TextBox());
			this->prenom = (gcnew System::Windows::Forms::TextBox());
			this->DNN = (gcnew System::Windows::Forms::TextBox());
			this->Date_Pachat_client = (gcnew System::Windows::Forms::TextBox());
			this->AP_F = (gcnew System::Windows::Forms::TextBox());
			this->CP_F = (gcnew System::Windows::Forms::TextBox());
			this->ville_F = (gcnew System::Windows::Forms::TextBox());
			this->AP_L = (gcnew System::Windows::Forms::TextBox());
			this->CP_L = (gcnew System::Windows::Forms::TextBox());
			this->ville_L = (gcnew System::Windows::Forms::TextBox());
			this->txt_AdresseF = (gcnew System::Windows::Forms::Label());
			this->txt_adresseL = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::Label());
			this->txt_DNN = (gcnew System::Windows::Forms::Label());
			this->txt_Pachat = (gcnew System::Windows::Forms::Label());
			this->txt_prenom = (gcnew System::Windows::Forms::Label());
			this->txt_numéroclient = (gcnew System::Windows::Forms::Label());
			this->txt_AP_F = (gcnew System::Windows::Forms::Label());
			this->txt_AP_L = (gcnew System::Windows::Forms::Label());
			this->txt_CP_F = (gcnew System::Windows::Forms::Label());
			this->txt_CP_L = (gcnew System::Windows::Forms::Label());
			this->txt_ville_L = (gcnew System::Windows::Forms::Label());
			this->txt_ville_F = (gcnew System::Windows::Forms::Label());
			this->nom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_personnel = (gcnew System::Windows::Forms::Label());
			this->txt_prenom_personnel = (gcnew System::Windows::Forms::Label());
			this->prenom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_AP_personnel = (gcnew System::Windows::Forms::Label());
			this->AP_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_CP_personnel = (gcnew System::Windows::Forms::Label());
			this->CP_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_ville_personnel = (gcnew System::Windows::Forms::Label());
			this->ville_personnel = (gcnew System::Windows::Forms::TextBox());
			this->id_superieur = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_superieur = (gcnew System::Windows::Forms::Label());
			this->ref_commande = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_commande = (gcnew System::Windows::Forms::Label());
			this->txt_id_client_commande = (gcnew System::Windows::Forms::Label());
			this->id_client_commande = (gcnew System::Windows::Forms::TextBox());
			this->add_commande = (gcnew System::Windows::Forms::Button());
			this->txt_date_emision_commande = (gcnew System::Windows::Forms::Label());
			this->Date_emision_commande = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_livraison_commande = (gcnew System::Windows::Forms::Label());
			this->Date_livraison_commande = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_article_commande = (gcnew System::Windows::Forms::Label());
			this->id_article_commande = (gcnew System::Windows::Forms::TextBox());
			this->txt_quantité_article_commande = (gcnew System::Windows::Forms::Label());
			this->quantite_article_commande = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_GestionPersonnel
			// 
			this->btn_GestionPersonnel->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_GestionPersonnel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_GestionPersonnel->Location = System::Drawing::Point(32, 26);
			this->btn_GestionPersonnel->Name = L"btn_GestionPersonnel";
			this->btn_GestionPersonnel->Size = System::Drawing::Size(230, 153);
			this->btn_GestionPersonnel->TabIndex = 0;
			this->btn_GestionPersonnel->Text = L"Gestion du personnel";
			this->btn_GestionPersonnel->UseVisualStyleBackColor = false;
			this->btn_GestionPersonnel->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionPersonnel_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(297, 26);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1573, 401);
			this->dataGridView1->TabIndex = 5;
			// 
			// btn_GestionClient
			// 
			this->btn_GestionClient->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_GestionClient->Location = System::Drawing::Point(32, 185);
			this->btn_GestionClient->Name = L"btn_GestionClient";
			this->btn_GestionClient->Size = System::Drawing::Size(230, 144);
			this->btn_GestionClient->TabIndex = 6;
			this->btn_GestionClient->Text = L"Gestion des clients";
			this->btn_GestionClient->UseVisualStyleBackColor = false;
			this->btn_GestionClient->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionClient_Click);
			// 
			// btn_GestionCommande
			// 
			this->btn_GestionCommande->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_GestionCommande->Location = System::Drawing::Point(32, 348);
			this->btn_GestionCommande->Name = L"btn_GestionCommande";
			this->btn_GestionCommande->Size = System::Drawing::Size(230, 143);
			this->btn_GestionCommande->TabIndex = 7;
			this->btn_GestionCommande->Text = L"Gestion des commandes";
			this->btn_GestionCommande->UseVisualStyleBackColor = false;
			this->btn_GestionCommande->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionCommande_Click);
			// 
			// btn_GestionStock
			// 
			this->btn_GestionStock->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_GestionStock->Location = System::Drawing::Point(32, 514);
			this->btn_GestionStock->Name = L"btn_GestionStock";
			this->btn_GestionStock->Size = System::Drawing::Size(230, 153);
			this->btn_GestionStock->TabIndex = 8;
			this->btn_GestionStock->Text = L"Gestion du stock";
			this->btn_GestionStock->UseVisualStyleBackColor = false;
			this->btn_GestionStock->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionStock_Click);
			// 
			// btn_GestionStatistique
			// 
			this->btn_GestionStatistique->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_GestionStatistique->Location = System::Drawing::Point(32, 678);
			this->btn_GestionStatistique->Name = L"btn_GestionStatistique";
			this->btn_GestionStatistique->Size = System::Drawing::Size(230, 160);
			this->btn_GestionStatistique->TabIndex = 9;
			this->btn_GestionStatistique->Text = L"Gestion des statistique";
			this->btn_GestionStatistique->UseVisualStyleBackColor = false;
			this->btn_GestionStatistique->Click += gcnew System::EventHandler(this, &MyForm::btn_GestionStatistique_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::DarkGray;
			this->btn_add->Location = System::Drawing::Point(212, 407);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(212, 152);
			this->btn_add->TabIndex = 25;
			this->btn_add->Text = L"Ajout";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// btn_supp
			// 
			this->btn_supp->BackColor = System::Drawing::Color::DarkGray;
			this->btn_supp->Location = System::Drawing::Point(430, 407);
			this->btn_supp->Name = L"btn_supp";
			this->btn_supp->Size = System::Drawing::Size(227, 152);
			this->btn_supp->TabIndex = 26;
			this->btn_supp->Text = L"Suppresion ";
			this->btn_supp->UseVisualStyleBackColor = false;
			// 
			// btn_upd
			// 
			this->btn_upd->BackColor = System::Drawing::Color::DarkGray;
			this->btn_upd->Location = System::Drawing::Point(212, 565);
			this->btn_upd->Name = L"btn_upd";
			this->btn_upd->Size = System::Drawing::Size(212, 142);
			this->btn_upd->TabIndex = 27;
			this->btn_upd->Text = L"Update";
			this->btn_upd->UseVisualStyleBackColor = false;
			// 
			// btn_afficher
			// 
			this->btn_afficher->BackColor = System::Drawing::Color::DarkGray;
			this->btn_afficher->Location = System::Drawing::Point(430, 565);
			this->btn_afficher->Name = L"btn_afficher";
			this->btn_afficher->Size = System::Drawing::Size(227, 142);
			this->btn_afficher->TabIndex = 28;
			this->btn_afficher->Text = L"Afficher";
			this->btn_afficher->UseVisualStyleBackColor = false;
			// 
			// numéro_client
			// 
			this->numéro_client->Location = System::Drawing::Point(792, 423);
			this->numéro_client->Multiline = true;
			this->numéro_client->Name = L"numéro_client";
			this->numéro_client->Size = System::Drawing::Size(347, 30);
			this->numéro_client->TabIndex = 13;
			this->numéro_client->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// nom
			// 
			this->nom->Location = System::Drawing::Point(792, 489);
			this->nom->Multiline = true;
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(347, 30);
			this->nom->TabIndex = 10;
			this->nom->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// prenom
			// 
			this->prenom->Location = System::Drawing::Point(792, 568);
			this->prenom->Multiline = true;
			this->prenom->Name = L"prenom";
			this->prenom->Size = System::Drawing::Size(347, 30);
			this->prenom->TabIndex = 11;
			this->prenom->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DNN
			// 
			this->DNN->Location = System::Drawing::Point(792, 629);
			this->DNN->Multiline = true;
			this->DNN->Name = L"DNN";
			this->DNN->Size = System::Drawing::Size(347, 30);
			this->DNN->TabIndex = 12;
			this->DNN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Date_Pachat_client
			// 
			this->Date_Pachat_client->Location = System::Drawing::Point(792, 691);
			this->Date_Pachat_client->Multiline = true;
			this->Date_Pachat_client->Name = L"Date_Pachat_client";
			this->Date_Pachat_client->Size = System::Drawing::Size(347, 30);
			this->Date_Pachat_client->TabIndex = 14;
			this->Date_Pachat_client->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AP_F
			// 
			this->AP_F->Location = System::Drawing::Point(1205, 431);
			this->AP_F->Multiline = true;
			this->AP_F->Name = L"AP_F";
			this->AP_F->Size = System::Drawing::Size(347, 30);
			this->AP_F->TabIndex = 16;
			this->AP_F->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CP_F
			// 
			this->CP_F->Location = System::Drawing::Point(1205, 474);
			this->CP_F->Multiline = true;
			this->CP_F->Name = L"CP_F";
			this->CP_F->Size = System::Drawing::Size(347, 30);
			this->CP_F->TabIndex = 17;
			this->CP_F->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ville_F
			// 
			this->ville_F->Location = System::Drawing::Point(1205, 522);
			this->ville_F->Multiline = true;
			this->ville_F->Name = L"ville_F";
			this->ville_F->Size = System::Drawing::Size(347, 30);
			this->ville_F->TabIndex = 18;
			this->ville_F->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ville_F->UseSystemPasswordChar = true;
			// 
			// AP_L
			// 
			this->AP_L->Location = System::Drawing::Point(1205, 598);
			this->AP_L->Multiline = true;
			this->AP_L->Name = L"AP_L";
			this->AP_L->Size = System::Drawing::Size(347, 30);
			this->AP_L->TabIndex = 19;
			this->AP_L->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CP_L
			// 
			this->CP_L->Location = System::Drawing::Point(1205, 645);
			this->CP_L->Multiline = true;
			this->CP_L->Name = L"CP_L";
			this->CP_L->Size = System::Drawing::Size(347, 30);
			this->CP_L->TabIndex = 20;
			this->CP_L->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ville_L
			// 
			this->ville_L->Location = System::Drawing::Point(1205, 691);
			this->ville_L->Multiline = true;
			this->ville_L->Name = L"ville_L";
			this->ville_L->Size = System::Drawing::Size(347, 30);
			this->ville_L->TabIndex = 21;
			this->ville_L->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_AdresseF
			// 
			this->txt_AdresseF->AutoSize = true;
			this->txt_AdresseF->Location = System::Drawing::Point(1317, 395);
			this->txt_AdresseF->Name = L"txt_AdresseF";
			this->txt_AdresseF->Size = System::Drawing::Size(127, 16);
			this->txt_AdresseF->TabIndex = 22;
			this->txt_AdresseF->Text = L"Adresse Facturation";
			// 
			// txt_adresseL
			// 
			this->txt_adresseL->AutoSize = true;
			this->txt_adresseL->Location = System::Drawing::Point(1317, 561);
			this->txt_adresseL->Name = L"txt_adresseL";
			this->txt_adresseL->Size = System::Drawing::Size(115, 16);
			this->txt_adresseL->TabIndex = 23;
			this->txt_adresseL->Text = L"Adresse Livraison";
			// 
			// txt_nom
			// 
			this->txt_nom->AutoSize = true;
			this->txt_nom->Location = System::Drawing::Point(799, 480);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(90, 16);
			this->txt_nom->TabIndex = 29;
			this->txt_nom->Text = L"Entrez un nom";
			this->txt_nom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_DNN
			// 
			this->txt_DNN->AutoSize = true;
			this->txt_DNN->Location = System::Drawing::Point(799, 619);
			this->txt_DNN->Name = L"txt_DNN";
			this->txt_DNN->Size = System::Drawing::Size(160, 16);
			this->txt_DNN->TabIndex = 32;
			this->txt_DNN->Text = L"Entrez Date de naissance";
			// 
			// txt_Pachat
			// 
			this->txt_Pachat->AutoSize = true;
			this->txt_Pachat->Location = System::Drawing::Point(798, 681);
			this->txt_Pachat->Name = L"txt_Pachat";
			this->txt_Pachat->Size = System::Drawing::Size(179, 16);
			this->txt_Pachat->TabIndex = 33;
			this->txt_Pachat->Text = L"Entrez Date du premier achat";
			// 
			// txt_prenom
			// 
			this->txt_prenom->AutoSize = true;
			this->txt_prenom->Location = System::Drawing::Point(798, 562);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(110, 16);
			this->txt_prenom->TabIndex = 34;
			this->txt_prenom->Text = L"Entrez un prénom";
			this->txt_prenom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_numéroclient
			// 
			this->txt_numéroclient->AutoSize = true;
			this->txt_numéroclient->Location = System::Drawing::Point(798, 420);
			this->txt_numéroclient->Name = L"txt_numéroclient";
			this->txt_numéroclient->Size = System::Drawing::Size(147, 16);
			this->txt_numéroclient->TabIndex = 35;
			this->txt_numéroclient->Text = L"Entrez un numéro_client";
			this->txt_numéroclient->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_AP_F
			// 
			this->txt_AP_F->AutoSize = true;
			this->txt_AP_F->Location = System::Drawing::Point(1214, 423);
			this->txt_AP_F->Name = L"txt_AP_F";
			this->txt_AP_F->Size = System::Drawing::Size(97, 16);
			this->txt_AP_F->TabIndex = 36;
			this->txt_AP_F->Text = L"adresse postal";
			// 
			// txt_AP_L
			// 
			this->txt_AP_L->AutoSize = true;
			this->txt_AP_L->Location = System::Drawing::Point(1214, 589);
			this->txt_AP_L->Name = L"txt_AP_L";
			this->txt_AP_L->Size = System::Drawing::Size(98, 16);
			this->txt_AP_L->TabIndex = 37;
			this->txt_AP_L->Text = L"Adresse postal";
			// 
			// txt_CP_F
			// 
			this->txt_CP_F->AutoSize = true;
			this->txt_CP_F->Location = System::Drawing::Point(1214, 464);
			this->txt_CP_F->Name = L"txt_CP_F";
			this->txt_CP_F->Size = System::Drawing::Size(86, 16);
			this->txt_CP_F->TabIndex = 38;
			this->txt_CP_F->Text = L"code postale";
			// 
			// txt_CP_L
			// 
			this->txt_CP_L->AutoSize = true;
			this->txt_CP_L->Location = System::Drawing::Point(1214, 635);
			this->txt_CP_L->Name = L"txt_CP_L";
			this->txt_CP_L->Size = System::Drawing::Size(80, 16);
			this->txt_CP_L->TabIndex = 39;
			this->txt_CP_L->Text = L"Code postal";
			// 
			// txt_ville_L
			// 
			this->txt_ville_L->AutoSize = true;
			this->txt_ville_L->Location = System::Drawing::Point(1214, 681);
			this->txt_ville_L->Name = L"txt_ville_L";
			this->txt_ville_L->Size = System::Drawing::Size(33, 16);
			this->txt_ville_L->TabIndex = 40;
			this->txt_ville_L->Text = L"Ville";
			// 
			// txt_ville_F
			// 
			this->txt_ville_F->AutoSize = true;
			this->txt_ville_F->Location = System::Drawing::Point(1214, 513);
			this->txt_ville_F->Name = L"txt_ville_F";
			this->txt_ville_F->Size = System::Drawing::Size(33, 16);
			this->txt_ville_F->TabIndex = 41;
			this->txt_ville_F->Text = L"Ville";
			// 
			// nom_personnel
			// 
			this->nom_personnel->Location = System::Drawing::Point(764, 403);
			this->nom_personnel->Multiline = true;
			this->nom_personnel->Name = L"nom_personnel";
			this->nom_personnel->Size = System::Drawing::Size(371, 59);
			this->nom_personnel->TabIndex = 29;
			// 
			// txt_nom_personnel
			// 
			this->txt_nom_personnel->AutoSize = true;
			this->txt_nom_personnel->Location = System::Drawing::Point(761, 394);
			this->txt_nom_personnel->Name = L"txt_nom_personnel";
			this->txt_nom_personnel->Size = System::Drawing::Size(96, 16);
			this->txt_nom_personnel->TabIndex = 30;
			this->txt_nom_personnel->Text = L"nom personnel";
			// 
			// txt_prenom_personnel
			// 
			this->txt_prenom_personnel->AutoSize = true;
			this->txt_prenom_personnel->Location = System::Drawing::Point(761, 465);
			this->txt_prenom_personnel->Name = L"txt_prenom_personnel";
			this->txt_prenom_personnel->Size = System::Drawing::Size(116, 16);
			this->txt_prenom_personnel->TabIndex = 32;
			this->txt_prenom_personnel->Text = L"prenom personnel";
			// 
			// prenom_personnel
			// 
			this->prenom_personnel->Location = System::Drawing::Point(764, 474);
			this->prenom_personnel->Multiline = true;
			this->prenom_personnel->Name = L"prenom_personnel";
			this->prenom_personnel->Size = System::Drawing::Size(371, 57);
			this->prenom_personnel->TabIndex = 31;
			// 
			// txt_AP_personnel
			// 
			this->txt_AP_personnel->AutoSize = true;
			this->txt_AP_personnel->Location = System::Drawing::Point(761, 536);
			this->txt_AP_personnel->Name = L"txt_AP_personnel";
			this->txt_AP_personnel->Size = System::Drawing::Size(102, 16);
			this->txt_AP_personnel->TabIndex = 34;
			this->txt_AP_personnel->Text = L"Adresse prostal";
			// 
			// AP_personnel
			// 
			this->AP_personnel->Location = System::Drawing::Point(764, 545);
			this->AP_personnel->Multiline = true;
			this->AP_personnel->Name = L"AP_personnel";
			this->AP_personnel->Size = System::Drawing::Size(371, 50);
			this->AP_personnel->TabIndex = 33;
			// 
			// txt_CP_personnel
			// 
			this->txt_CP_personnel->AutoSize = true;
			this->txt_CP_personnel->Location = System::Drawing::Point(761, 614);
			this->txt_CP_personnel->Name = L"txt_CP_personnel";
			this->txt_CP_personnel->Size = System::Drawing::Size(80, 16);
			this->txt_CP_personnel->TabIndex = 36;
			this->txt_CP_personnel->Text = L"Code postal";
			// 
			// CP_personnel
			// 
			this->CP_personnel->Location = System::Drawing::Point(764, 623);
			this->CP_personnel->Multiline = true;
			this->CP_personnel->Name = L"CP_personnel";
			this->CP_personnel->Size = System::Drawing::Size(371, 55);
			this->CP_personnel->TabIndex = 35;
			// 
			// txt_ville_personnel
			// 
			this->txt_ville_personnel->AutoSize = true;
			this->txt_ville_personnel->Location = System::Drawing::Point(761, 696);
			this->txt_ville_personnel->Name = L"txt_ville_personnel";
			this->txt_ville_personnel->Size = System::Drawing::Size(94, 16);
			this->txt_ville_personnel->TabIndex = 38;
			this->txt_ville_personnel->Text = L"ville personnel";
			// 
			// ville_personnel
			// 
			this->ville_personnel->Location = System::Drawing::Point(764, 705);
			this->ville_personnel->Multiline = true;
			this->ville_personnel->Name = L"ville_personnel";
			this->ville_personnel->Size = System::Drawing::Size(371, 59);
			this->ville_personnel->TabIndex = 37;
			// 
			// id_superieur
			// 
			this->id_superieur->Location = System::Drawing::Point(1169, 524);
			this->id_superieur->Multiline = true;
			this->id_superieur->Name = L"id_superieur";
			this->id_superieur->Size = System::Drawing::Size(371, 43);
			this->id_superieur->TabIndex = 39;
			// 
			// txt_id_superieur
			// 
			this->txt_id_superieur->AutoSize = true;
			this->txt_id_superieur->Location = System::Drawing::Point(1166, 515);
			this->txt_id_superieur->Name = L"txt_id_superieur";
			this->txt_id_superieur->Size = System::Drawing::Size(122, 16);
			this->txt_id_superieur->TabIndex = 40;
			this->txt_id_superieur->Text = L"identifiant superieur";
			// 
			// ref_commande
			// 
			this->ref_commande->Location = System::Drawing::Point(229, 378);
			this->ref_commande->Multiline = true;
			this->ref_commande->Name = L"ref_commande";
			this->ref_commande->Size = System::Drawing::Size(294, 31);
			this->ref_commande->TabIndex = 29;
			// 
			// txt_ref_commande
			// 
			this->txt_ref_commande->AutoSize = true;
			this->txt_ref_commande->Location = System::Drawing::Point(229, 364);
			this->txt_ref_commande->Name = L"txt_ref_commande";
			this->txt_ref_commande->Size = System::Drawing::Size(97, 16);
			this->txt_ref_commande->TabIndex = 30;
			this->txt_ref_commande->Text = L"ref_commande";
			// 
			// txt_id_client_commande
			// 
			this->txt_id_client_commande->AutoSize = true;
			this->txt_id_client_commande->Location = System::Drawing::Point(229, 419);
			this->txt_id_client_commande->Name = L"txt_id_client_commande";
			this->txt_id_client_commande->Size = System::Drawing::Size(167, 16);
			this->txt_id_client_commande->TabIndex = 32;
			this->txt_id_client_commande->Text = L"id_client (voir gestionclient)";
			// 
			// id_client_commande
			// 
			this->id_client_commande->Location = System::Drawing::Point(229, 433);
			this->id_client_commande->Multiline = true;
			this->id_client_commande->Name = L"id_client_commande";
			this->id_client_commande->Size = System::Drawing::Size(294, 31);
			this->id_client_commande->TabIndex = 31;
			// 
			// add_commande
			// 
			this->add_commande->BackColor = System::Drawing::Color::PaleGreen;
			this->add_commande->Location = System::Drawing::Point(569, 483);
			this->add_commande->Name = L"add_commande";
			this->add_commande->Size = System::Drawing::Size(253, 85);
			this->add_commande->TabIndex = 35;
			this->add_commande->Text = L"Ajouter une commande";
			this->add_commande->UseVisualStyleBackColor = false;
			// 
			// txt_date_emision_commande
			// 
			this->txt_date_emision_commande->AutoSize = true;
			this->txt_date_emision_commande->Location = System::Drawing::Point(229, 469);
			this->txt_date_emision_commande->Name = L"txt_date_emision_commande";
			this->txt_date_emision_commande->Size = System::Drawing::Size(171, 16);
			this->txt_date_emision_commande->TabIndex = 37;
			this->txt_date_emision_commande->Text = L"date d\'émision (aujourd\'hui)";
			// 
			// Date_emision_commande
			// 
			this->Date_emision_commande->Location = System::Drawing::Point(229, 483);
			this->Date_emision_commande->Multiline = true;
			this->Date_emision_commande->Name = L"Date_emision_commande";
			this->Date_emision_commande->Size = System::Drawing::Size(294, 31);
			this->Date_emision_commande->TabIndex = 36;
			// 
			// txt_date_livraison_commande
			// 
			this->txt_date_livraison_commande->AutoSize = true;
			this->txt_date_livraison_commande->Location = System::Drawing::Point(229, 525);
			this->txt_date_livraison_commande->Name = L"txt_date_livraison_commande";
			this->txt_date_livraison_commande->Size = System::Drawing::Size(167, 16);
			this->txt_date_livraison_commande->TabIndex = 39;
			this->txt_date_livraison_commande->Text = L"Date livraison (minim 2jour)";
			// 
			// Date_livraison_commande
			// 
			this->Date_livraison_commande->Location = System::Drawing::Point(229, 539);
			this->Date_livraison_commande->Multiline = true;
			this->Date_livraison_commande->Name = L"Date_livraison_commande";
			this->Date_livraison_commande->Size = System::Drawing::Size(294, 31);
			this->Date_livraison_commande->TabIndex = 38;
			// 
			// txt_id_article_commande
			// 
			this->txt_id_article_commande->AutoSize = true;
			this->txt_id_article_commande->Location = System::Drawing::Point(229, 581);
			this->txt_id_article_commande->Name = L"txt_id_article_commande";
			this->txt_id_article_commande->Size = System::Drawing::Size(151, 16);
			this->txt_id_article_commande->TabIndex = 41;
			this->txt_id_article_commande->Text = L"id_article (gestion stock)";
			// 
			// id_article_commande
			// 
			this->id_article_commande->Location = System::Drawing::Point(229, 595);
			this->id_article_commande->Multiline = true;
			this->id_article_commande->Name = L"id_article_commande";
			this->id_article_commande->Size = System::Drawing::Size(294, 31);
			this->id_article_commande->TabIndex = 40;
			// 
			// txt_quantité_article_commande
			// 
			this->txt_quantité_article_commande->AutoSize = true;
			this->txt_quantité_article_commande->Location = System::Drawing::Point(229, 641);
			this->txt_quantité_article_commande->Name = L"txt_quantité_article_commande";
			this->txt_quantité_article_commande->Size = System::Drawing::Size(144, 16);
			this->txt_quantité_article_commande->TabIndex = 43;
			this->txt_quantité_article_commande->Text = L"quantité de cette article";
			// 
			// quantite_article_commande
			// 
			this->quantite_article_commande->Location = System::Drawing::Point(229, 655);
			this->quantite_article_commande->Multiline = true;
			this->quantite_article_commande->Name = L"quantite_article_commande";
			this->quantite_article_commande->Size = System::Drawing::Size(294, 31);
			this->quantite_article_commande->TabIndex = 42;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1900, 1000);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_GestionStatistique);
			this->Controls->Add(this->btn_GestionStock);
			this->Controls->Add(this->btn_GestionCommande);
			this->Controls->Add(this->btn_GestionClient);
			this->Controls->Add(this->btn_GestionPersonnel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btn_GestionPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		b = 1;
		couleur(b);
		windformaffiche(0);
		this->dataGridView1->Refresh();
		windformaffiche(b);
	}
	private: System::Void btn_GestionClient_Click(System::Object^ sender, System::EventArgs^ e) {
		b = 2;
		couleur(b);
		windformaffiche(0);
		this->dataGridView1->Refresh();
		windformaffiche(b);


	}
	private: System::Void btn_GestionCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		b = 3;
		couleur(b);
		windformaffiche(0);
		this->dataGridView1->Refresh();
		windformaffiche(b);


	}
	private: System::Void btn_GestionStock_Click(System::Object^ sender, System::EventArgs^ e) {
		b = 4;
		couleur(b);
		windformaffiche(0);
		this->dataGridView1->Refresh();
		windformaffiche(b);


	}
	private: System::Void btn_GestionStatistique_Click(System::Object^ sender, System::EventArgs^ e) {
		b = 5;
		couleur(b);
		windformaffiche(0);
		this->dataGridView1->Refresh();
		windformaffiche(b);

	}



		   void couleur(int a) {
			   this->btn_GestionPersonnel->BackColor = System::Drawing::Color::LightSkyBlue;
			   this->btn_GestionStock->BackColor = System::Drawing::Color::LightSkyBlue;
			   this->btn_GestionStatistique->BackColor = System::Drawing::Color::LightSkyBlue;
			   this->btn_GestionCommande->BackColor = System::Drawing::Color::LightSkyBlue;
			   this->btn_GestionClient->BackColor = System::Drawing::Color::LightSkyBlue;
			   switch (a)
			   {
			   case 1: this->btn_GestionPersonnel->BackColor = System::Drawing::Color::SteelBlue; break;
			   case 2: this->btn_GestionClient->BackColor = System::Drawing::Color::SteelBlue; break;
			   case 3: this->btn_GestionCommande->BackColor = System::Drawing::Color::SteelBlue; break;
			   case 4: this->btn_GestionStock->BackColor = System::Drawing::Color::SteelBlue; break;
			   case 5: this->btn_GestionStatistique->BackColor = System::Drawing::Color::SteelBlue; break;
			   }
		   }

		   void windformaffiche(int a){
			   switch (a)
			   {
			   case 0:
				   this->Controls->Remove(this->txt_ville_F);
				   this->Controls->Remove(this->txt_ville_L);
				   this->Controls->Remove(this->txt_CP_L);
				   this->Controls->Remove(this->txt_CP_F);
				   this->Controls->Remove(this->txt_AP_L);
				   this->Controls->Remove(this->txt_AP_F);
				   this->Controls->Remove(this->txt_numéroclient);
				   this->Controls->Remove(this->txt_prenom);
				   this->Controls->Remove(this->txt_Pachat);
				   this->Controls->Remove(this->txt_DNN);
				   this->Controls->Remove(this->txt_nom);
				   this->Controls->Remove(this->txt_adresseL);
				   this->Controls->Remove(this->txt_AdresseF);
				   this->Controls->Remove(this->ville_L);
				   this->Controls->Remove(this->CP_L);
				   this->Controls->Remove(this->AP_L);
				   this->Controls->Remove(this->ville_F);
				   this->Controls->Remove(this->CP_F);
				   this->Controls->Remove(this->AP_F);
				   this->Controls->Remove(this->Date_Pachat_client);
				   this->Controls->Remove(this->numéro_client);
				   this->Controls->Remove(this->DNN);
				   this->Controls->Remove(this->prenom);
				   this->Controls->Remove(this->nom);
				   this->Controls->Remove(this->txt_id_superieur);
				   this->Controls->Remove(this->id_superieur);
				   this->Controls->Remove(this->txt_ville_personnel);
				   this->Controls->Remove(this->ville_personnel);
				   this->Controls->Remove(this->txt_CP_personnel);
				   this->Controls->Remove(this->CP_personnel);
				   this->Controls->Remove(this->txt_AP_personnel);
				   this->Controls->Remove(this->AP_personnel);
				   this->Controls->Remove(this->txt_prenom_personnel);
				   this->Controls->Remove(this->prenom_personnel);
				   this->Controls->Remove(this->txt_nom_personnel);
				   this->Controls->Remove(this->nom_personnel);
				   this->Controls->Remove(this->btn_afficher);
				   this->Controls->Remove(this->btn_upd);
				   this->Controls->Remove(this->btn_supp);
				   this->Controls->Remove(this->btn_add);
				   this->Controls->Remove(this->txt_quantité_article_commande);
				   this->Controls->Remove(this->quantite_article_commande);
				   this->Controls->Remove(this->txt_id_article_commande);
				   this->Controls->Remove(this->id_article_commande);
				   this->Controls->Remove(this->txt_date_livraison_commande);
				   this->Controls->Remove(this->Date_livraison_commande);
				   this->Controls->Remove(this->txt_date_emision_commande);
				   this->Controls->Remove(this->Date_emision_commande);
				   this->Controls->Remove(this->add_commande);
				   this->Controls->Remove(this->txt_id_client_commande);
				   this->Controls->Remove(this->id_client_commande);
				   this->Controls->Remove(this->txt_ref_commande);
				   this->Controls->Remove(this->ref_commande);
				   break;		   

			   case 1 :
				   this->Controls->Add(this->btn_afficher);
				   this->Controls->Add(this->btn_upd);
				   this->Controls->Add(this->btn_supp);
				   this->Controls->Add(this->btn_add);
				   this->Controls->Add(this->txt_id_superieur);
				   this->Controls->Add(this->id_superieur);
				   this->Controls->Add(this->txt_ville_personnel);
				   this->Controls->Add(this->ville_personnel);
				   this->Controls->Add(this->txt_CP_personnel);
				   this->Controls->Add(this->CP_personnel);
				   this->Controls->Add(this->txt_AP_personnel);
				   this->Controls->Add(this->AP_personnel);
				   this->Controls->Add(this->txt_prenom_personnel);
				   this->Controls->Add(this->prenom_personnel);
				   this->Controls->Add(this->txt_nom_personnel);
				   this->Controls->Add(this->nom_personnel);
				   break;
			   case 2 :
				   this->Controls->Add(this->btn_afficher);
				   this->Controls->Add(this->btn_upd);
				   this->Controls->Add(this->btn_supp);
				   this->Controls->Add(this->btn_add);
				   this->Controls->Add(this->txt_ville_F);
				   this->Controls->Add(this->txt_ville_L);
				   this->Controls->Add(this->txt_CP_L);
				   this->Controls->Add(this->txt_CP_F);
				   this->Controls->Add(this->txt_AP_L);
				   this->Controls->Add(this->txt_AP_F);
				   this->Controls->Add(this->txt_numéroclient);
				   this->Controls->Add(this->txt_prenom);
				   this->Controls->Add(this->txt_Pachat);
				   this->Controls->Add(this->txt_DNN);
				   this->Controls->Add(this->txt_nom);
				   this->Controls->Add(this->txt_adresseL);
				   this->Controls->Add(this->txt_AdresseF);
				   this->Controls->Add(this->ville_L);
				   this->Controls->Add(this->CP_L);
				   this->Controls->Add(this->AP_L);
				   this->Controls->Add(this->ville_F);
				   this->Controls->Add(this->CP_F);
				   this->Controls->Add(this->AP_F);
				   this->Controls->Add(this->Date_Pachat_client);
				   this->Controls->Add(this->numéro_client);
				   this->Controls->Add(this->DNN);
				   this->Controls->Add(this->prenom);
				   this->Controls->Add(this->nom);
				   break;
			   case 3 : 
				   this->Controls->Add(this->txt_quantité_article_commande);
				   this->Controls->Add(this->quantite_article_commande);
				   this->Controls->Add(this->txt_id_article_commande);
				   this->Controls->Add(this->id_article_commande);
				   this->Controls->Add(this->txt_date_livraison_commande);
				   this->Controls->Add(this->Date_livraison_commande);
				   this->Controls->Add(this->txt_date_emision_commande);
				   this->Controls->Add(this->Date_emision_commande);
				   this->Controls->Add(this->add_commande);
				   this->Controls->Add(this->txt_id_client_commande);
				   this->Controls->Add(this->id_client_commande);
				   this->Controls->Add(this->txt_ref_commande);
				   this->Controls->Add(this->ref_commande);
				   break;
			   }
		   
		   }





private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}