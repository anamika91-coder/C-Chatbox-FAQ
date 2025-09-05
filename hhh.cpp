#include <stdio.h>

int main() {
    const char *questions[] = {
        "1. How do I reset my password?",
        "2. What payment methods do you accept?",
        "3. Does the app work offline?",
        "4. How can I contact customer support?",
        "5. What is your refund policy?",
        "6. How do I update the app?",
        "7. Is my data secure?",
        "8. Can I change my username?",
        "9. How do I delete my account?",
        "10. What platforms does the app support?",
        "11. Do you have a free trial?",
        "12. How can I recover my account?",
        "13. Can I use the app on multiple devices?",
        "14. What are the system requirements?",
        "15. Is dark mode available?",
        "16. How do I enable notifications?",
        "17. Can I share my account?",
        "18. How do I change my email address?",
        "19. What languages are supported?",
        "20. How do I clear cache?"
    };

    const char *answers[] = {
        "Go to Settings -> Security -> Reset Password.",
        "We accept UPI, debit/credit cards, and NetBanking.",
        "Core features need internet. Synced data is available offline.",
        "You can contact support via Help -> Contact Us.",
        "Refunds are available within 7 days of purchase under our policy.",
        "Visit Play Store/App Store -> Updates -> Install latest version.",
        "Yes, we use industry standard encryption to protect your data.",
        "Sorry, usernames cannot be changed once created.",
        "Go to Settings -> Account -> Delete Account.",
        "The app supports Android, iOS, and Web platforms.",
        "Yes, we provide a 14-day free trial.",
        "Use the 'Forgot Password' option on the login screen.",
        "Yes, you can log in on multiple devices with the same account.",
        "Minimum: 2GB RAM, 200MB storage, Android 8.0+ / iOS 12+.",
        "Yes, dark mode is available in Settings -> Display -> Theme.",
        "Enable notifications from Settings -> Notifications.",
        "No, sharing accounts is against our policy.",
        "Go to Settings -> Profile -> Change Email.",
        "Currently supported: English, Hindi, and Spanish.",
        "Go to Settings -> Storage -> Clear Cache."
    };

    int totalFAQs = 20;
    int choice;

    printf("?? Chatbot ready with 20 FAQs!\n");

    while (1) {
        printf("\n=== FAQ Menu ===\n");
        for (int i = 0; i < totalFAQs; i++) {
            printf("%s\n", questions[i]);
        }

        printf("\nEnter your choice (1-20) or 0 to exit: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Bot: Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= totalFAQs) {
            printf("\nYou asked: %s\n", questions[choice - 1]);
            printf("Bot: %s\n", answers[choice - 1]);
        } else {
            printf("Bot: Invalid option. Please try again.\n");
        }
    }

    return 0;
}


