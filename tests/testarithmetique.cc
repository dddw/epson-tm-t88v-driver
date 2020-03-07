#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>

int main()
{
  // Obtenir le registre de tests
  CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();
  // Obtenir la suite principale depuis le registre
  CppUnit::Test *suite = registry.makeTest();
  // Ajouter la suite à l'exécutant des tests
  CppUnit::TextUi::TestRunner runner;
  runner.addTest(suite);
  // Définir l'utilitaire de sortie au format "erreurs de compilation"
  runner.setOutputter(new CppUnit::CompilerOutputter(&runner.result(),
                      std::cerr));
  // Lancer l'exécution des tests
  bool wasSucessful = runner.run();
  // Retourner le code d'erreur 1 si l'un des tests a échoué
  return wasSucessful ? 0 : 1;
}