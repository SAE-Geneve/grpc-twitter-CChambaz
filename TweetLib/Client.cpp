#include "Client.h"

namespace tweet {

	proto::TweetOut Client::Tweet(const proto::TweetIn in)
	{
		grpc::ClientContext client_context;
		proto::TweetOut out;
		auto status = stub_->Tweet(&client_context, in, &out);
		if (!status.ok())
			throw std::runtime_error("Tweet error.");
		return out;
	}

	proto::FollowOut Client::Follow(const proto::FollowIn in)
	{
		grpc::ClientContext client_context;
		proto::FollowOut out;
		auto status = stub_->Follow(&client_context, in, &out);
		if (!status.ok())
			throw std::runtime_error("Follow error.");
		return out;
	}

	proto::ShowOut Client::Show(const proto::ShowIn in)
	{
		grpc::ClientContext client_context;
		proto::ShowOut out;
		auto status = stub_->Show(&client_context, in, &out);
		if (!status.ok())
			throw std::runtime_error("Show error.");
		return out;
	}

	proto::LoginOut Client::Login(const proto::LoginIn in)
	{
		grpc::ClientContext client_context;
		proto::LoginOut out;
		auto status = stub_->Login(&client_context, in, &out);
		if (!status.ok())
			throw std::runtime_error("Login error.");
		return out;
	}

	proto::logoutOut Client::Logout(const proto::LogoutIn in)
	{
		grpc::ClientContext client_context;
		proto::logoutOut out;
		auto status = stub_->Logout(&client_context, in, &out);
		if (!status.ok())
			throw std::runtime_error("Logout error.");
		return out;
	}

	proto::RegisterOut Client::Register(const proto::RegisterIn in)
	{
		grpc::ClientContext client_context;
		proto::RegisterOut out;
		auto status = stub_->Register(&client_context, in, &out);
		if (!status.ok())
			throw std::runtime_error("Register error.");
		return out;
	}

} // End namespace tweet.
